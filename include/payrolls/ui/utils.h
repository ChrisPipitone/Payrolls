#pragma once
#include <curses.h>
#include <string>

inline void print_in_middle(WINDOW *win, int starty, int startx, int width,
                            const std::string &str, chtype color) {
  int x, y;

  if (win == NULL)
    win = stdscr;
  getyx(win, y, x);
  if (startx != 0)
    x = startx;
  if (starty != 0)
    y = starty;
  if (width == 0)
    width = 80;

  int length = static_cast<int>(str.length());
  x = startx + (width - length) / 2;
  wattron(win, color);
  mvwprintw(win, y, x, "%s", str.c_str());
  wattroff(win, color);
  refresh();
}

inline WINDOW *centered_win(int h, int w) {
  int rows, cols;
  getmaxyx(stdscr, rows, cols);
  return newwin(h, w, (rows - h) / 2, (cols - w) / 2);
}
