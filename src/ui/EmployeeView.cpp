#include "payrolls/ui/EmployeeView.h"
#include "payrolls/ui/utils.h"

void EmployeeView::draw() {
  box(view_win, 0, 0);
  print_in_middle(view_win, 1, 0, 40, "Employee View", COLOR_PAIR(1));
  mvwaddch(view_win, 2, 0, ACS_LTEE);
  mvwhline(view_win, 2, 1, ACS_HLINE, 38);
  mvwaddch(view_win, 2, 39, ACS_RTEE);
  refresh();
  wrefresh(view_win);
}

void EmployeeView::render() {
  mvprintw(LINES - 3, 0, "q to exit EmployeeView");
  bool exit_selected = false;
  int c = 0;
  do {
    draw();
  } while (!exit_selected && (c = wgetch(view_win)) != 'q');

  werase(view_win);
  wrefresh(view_win);

  // exit: clear stdscr line
  move(LINES - 3, 0);
  clrtoeol();
  refresh();
}
