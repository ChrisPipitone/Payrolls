
#include "payrolls/ui/MainMenuView.h"
#include "payrolls/ui/utils.h"

int main() {
  // Initialize curses
  NcursesGuard ncurses;
  start_color();
  cbreak();
  noecho();
  keypad(stdscr, TRUE);
  init_pair(1, COLOR_RED, COLOR_BLACK);

  MainMenuView mmv;
  mmv.render();
}
