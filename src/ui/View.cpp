#include "payrolls/ui/View.h"

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

Rect View::content_rect() const { return {LINES - 7, COLS - 2, 3, 1}; }
