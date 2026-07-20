#include <vector>

#include "payrolls/ui/EmployeeView.h"
#include "payrolls/ui/utils.h"

struct RoleMenuChoice {
  const char* choice_name;
  const char* description;
};

constexpr RoleMenuChoice role_menu_choice[] = {
    {"Employee", "- Basic Employee View"},
    {"HR", "- HR View"},
    {"Manager", "- Manager View"},
    {"Exit", ""},
};

void hr_view() {}
void manager_view() {}

int main() {
  // Initialize curses
  NcursesGuard ncurses;
  start_color();
  cbreak();
  noecho();
  keypad(stdscr, TRUE);
  init_pair(1, COLOR_RED, COLOR_BLACK);

  // Create Main Menu items
  int n_menu_items = ARRAY_SIZE(role_menu_choice);
  std::vector<ITEM*> menu_items(n_menu_items + 1, nullptr);
  for (auto i = 0; i < n_menu_items; i++) {
    menu_items[i] = new_item(role_menu_choice[i].choice_name, role_menu_choice[i].description);
  }

  // Create Main Menu
  MENU* main_menu = new_menu(menu_items.data());

  /* Create the window to be associated with the menu */
  WINDOW* main_menu_win = centered_win(10, 40);
  keypad(main_menu_win, TRUE);

  /* Set main window and sub window */
  set_menu_win(main_menu, main_menu_win);
  set_menu_sub(main_menu, derwin(main_menu_win, 6, 38, 3, 1));

  /* Set menu mark to the string " * " */
  set_menu_mark(main_menu, " * ");

  /* Print a border around the main window and print a title */
  box(main_menu_win, 0, 0);
  print_in_middle(main_menu_win, 1, 0, 40, "Main Menu", COLOR_PAIR(1));
  mvwaddch(main_menu_win, 2, 0, ACS_LTEE);
  mvwhline(main_menu_win, 2, 1, ACS_HLINE, 38);
  mvwaddch(main_menu_win, 2, 39, ACS_RTEE);
  mvprintw(LINES - 2, 0, "F1 to exit");
  refresh();

  /* Post the menu */
  post_menu(main_menu);
  wrefresh(main_menu_win);

  int c;
  while ((c = wgetch(main_menu_win)) != KEY_F(1)) {
    // selection made, if navigation continue
    if (!handle_menu_nav(main_menu, c) && (c == '\n' || c == KEY_ENTER)) {
      int idx = item_index(current_item(main_menu));
      if (idx == 3) break;  //
      if (idx == 0) {       // Employee Selected
        EmployeeView ev;
        ev.render();
        touchwin(main_menu_win);
        wrefresh(main_menu_win);
      }
      if (idx == 0) {  // Employee Selected
        hr_view();
      }
      if (idx == 0) {  // Employee Selected
        manager_view();
      }
    }
    wrefresh(main_menu_win);
  }

  // Unpost and free all the memory taken up
  unpost_menu(main_menu);
  free_menu(main_menu);
  for (auto* item : menu_items)
    if (item) free_item(item);
}
