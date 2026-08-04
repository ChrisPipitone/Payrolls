#pragma once
#include <menu.h>

#include <string>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

struct NcursesGuard {
  NcursesGuard() { initscr(); }
  ~NcursesGuard() { endwin(); }
};

inline bool handle_menu_nav(MENU* menu, int c) {
  if (c == KEY_DOWN || c == 'j')
    menu_driver(menu, REQ_DOWN_ITEM);
  else if (c == KEY_UP || c == 'k')
    menu_driver(menu, REQ_UP_ITEM);
  else if (c == KEY_LEFT || c == 'h')
    menu_driver(menu, REQ_LEFT_ITEM);
  else if (c == KEY_RIGHT || c == 'l')
    menu_driver(menu, REQ_RIGHT_ITEM);
  else
    return false;

  return true;
}
inline void print_in_middle(WINDOW* win, int starty, int startx, int width, const std::string& str,
                            chtype color) {
  int x, y;

  if (win == NULL) win = stdscr;
  getyx(win, y, x);
  if (startx != 0) x = startx;
  if (starty != 0) y = starty;
  if (width == 0) width = 80;

  int length = static_cast<int>(str.length());
  x = startx + (width - length) / 2;
  wattron(win, color);
  mvwprintw(win, y, x, "%s", str.c_str());
  wattroff(win, color);
  refresh();
}

inline WINDOW* centered_win(int h, int w) {
  int rows, cols;
  getmaxyx(stdscr, rows, cols);
  return newwin(h, w, (rows - h) / 2, (cols - w) / 2);
}
