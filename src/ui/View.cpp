#include "payrolls/ui/View.h"

View::View() : view_win(newwin(LINES, COLS, 0, 0)), hint_der_win(nullptr) {
  hint_der_win = derwin(view_win, 3, COLS - 2, LINES - 4, 1);
  keypad(view_win, TRUE);
}

View::~View() {
  delwin(hint_der_win);
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
  wrefresh(hint_der_win);
}
