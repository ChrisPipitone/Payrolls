#include "payrolls/ui/EmployeeView.h"

#include "payrolls/ui/utils.h"

void EmployeeView::draw() {
  box(view_win, 0, 0);
  int w = getmaxx(view_win);
  print_in_middle(view_win, 1, 0, w, "Employee View", COLOR_PAIR(1));
  mvwaddch(view_win, 2, 0, ACS_LTEE);
  mvwhline(view_win, 2, 1, ACS_HLINE, w - 2);
  mvwaddch(view_win, 2, w - 1, ACS_RTEE);
  wrefresh(view_win);
}

void EmployeeView::render() {
  bool exit_selected = false;
  wclear(view_win);
  mvwprintw(view_win, LINES - 3, 3, "q to exit EmployeeView");
  int c = 0;
  do {
    draw();
  } while (!exit_selected && (c = wgetch(view_win)) != 'q');

  werase(view_win);
  wrefresh(view_win);
}
