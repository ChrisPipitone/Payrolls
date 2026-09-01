#include "payrolls/ui/View.h"

#include <climits>
#include <cstdlib>

#include "payrolls/ui/Layout.h"

View::View() : view_win(newwin(LINES, COLS, 0, 0)), hint_der_win(nullptr) {
  panel = new_panel(view_win);
  hide_panel(panel);
  keypad(view_win, TRUE);
  hint_der_win = derwin(view_win, 3, COLS - 2, LINES - 4, 1);
}

View::~View() {
  delwin(hint_der_win);
  del_panel(panel);
  delwin(view_win);
}

void View::draw_hints() {
  werase(hint_der_win);
  box(hint_der_win, 0, 0);
  int x = 1;
  for (const auto& hint : hints()) {
    mvwprintw(hint_der_win, 1, x, "[%s] %s", hint.key.data(), hint.action.data());
    x += 4 + hint.key.size() + hint.action.size();
  }
  wnoutrefresh(hint_der_win);
}

bool View::change_focused_section(Dir direction) {
  // Focus is chosen by comparing Section rects geometrically.
  // Precondition: rects do not overlap. Holds by construction — assign_rects partitions.

  if (!focused_) return false;

  const bool horizontal = (direction == Dir::Left) || (direction == Dir::Right);
  // ncurses grows x rightward and y downward, so Right/Down are the positive directions
  const bool is_forward = (direction == Dir::Right || direction == Dir::Down);

  const Rect& focused_rect = focused_->get_rect();
  Section* best_section = nullptr;
  // Worse than any real score, so the first surviving candidate wins
  std::pair best_score(INT_MAX, INT_MAX);

  // Applied to every leaf in the layout tree
  auto visit = [&](Section* s) {
    if (s == focused_) return;

    const Rect& candidate_rect = s->get_rect();
    // A zero-area rect is invisible but would still take focus and swallow every key
    if (candidate_rect.h <= 0 || candidate_rect.w <= 0) return;

    // How far the candidate's center sits off mine, perpendicular to travel.
    // Breaks gap ties: among equally near rects, the straightest ahead wins.
    // Held at 2x (2*start + extent) — y + h/2 truncates the half-row and ties falsely.
    int rect_center_deviation = 0;

    // Space between my leading wall and the candidate's trailing wall
    int gap = 0;

    if (horizontal) {
      // Reject rects the beam misses — no shared rows means it is diagonal, not beside me
      if (!(candidate_rect.y < focused_rect.y + focused_rect.h &&
            focused_rect.y < candidate_rect.y + candidate_rect.h))
        return;

      if (is_forward)
        gap = candidate_rect.x - (focused_rect.x + focused_rect.w);
      else
        gap = focused_rect.x - (candidate_rect.x + candidate_rect.w);

      rect_center_deviation = std::abs((2 * candidate_rect.y + candidate_rect.h) -
                                       (2 * focused_rect.y + focused_rect.h));
    } else {
      // Reject rects the beam misses — no shared cols means it is diagonal, not beside me
      if (!(candidate_rect.x < focused_rect.x + focused_rect.w &&
            focused_rect.x < candidate_rect.x + candidate_rect.w))
        return;

      if (is_forward)
        gap = candidate_rect.y - (focused_rect.y + focused_rect.h);
      else
        gap = focused_rect.y - (candidate_rect.y + candidate_rect.h);

      rect_center_deviation = std::abs((2 * candidate_rect.x + candidate_rect.w) -
                                       (2 * focused_rect.x + focused_rect.w));
    }

    // Negative gap means the candidate is behind me, or overlapping me. Overlap is out of
    // scope for View:Section — stacked UI belongs in View:Panels.
    if (gap < 0) return;

    // Exact ties go to whichever section traversal reached first — deterministic, arbitrary.
    const std::pair score(gap, rect_center_deviation);
    if (score < best_score) {
      best_score = score;
      best_section = s;
    }
  };

  traversal(root_node, visit);
  if (!best_section) return false;

  focused_->set_focused(false);
  focused_ = best_section;
  focused_->set_focused(true);
  return true;
}

Rect View::content_rect() const { return {LINES - 7, COLS - 2, 3, 1}; }
