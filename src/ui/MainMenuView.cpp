
#include "payrolls/ui/MainMenuView.h"

#include <menu.h>

#include "payrolls/ui/App.h"
#include "payrolls/ui/EmployeeView.h"
#include "payrolls/ui/utils.h"

MainMenuView::MainMenuView() : main_menu(nullptr), menu_items(kOptions.size() + 1, nullptr) {
  // Fill main_menu with ITEM* with name and desc of kOptions
  for (size_t i = 0; i < kOptions.size(); i++) {
    menu_items[i] = new_item(kOptions[i].name.data(), kOptions[i].desc.data());
  }
  main_menu = new_menu(menu_items.data());

  // Set menu to main window and sub window
  set_menu_win(main_menu, view_win);

  // worry about these hard coded values later
  menu_sub_win = derwin(view_win, 6, 38, 3, 1);
  set_menu_sub(main_menu, menu_sub_win);

  // Set menu mark to the string " * "
  set_menu_mark(main_menu, " * ");

  post_menu(main_menu);
}

MainMenuView::~MainMenuView() {
  unpost_menu(main_menu);
  free_menu(main_menu);
  delwin(menu_sub_win);
  for (auto* item : menu_items)
    if (item) free_item(item);
  // window is destoried by parent dtor
}

const std::vector<KeyHint>& MainMenuView::hints() const {
  static const std::vector<KeyHint> h = {{"q", "Exit"}};
  return h;
}

void MainMenuView::on_render() {
  // Print a border around the main window and print a title
  box(view_win, 0, 0);
  int w = getmaxx(view_win);
  print_in_middle(view_win, 1, 0, w, "Main Menu View", COLOR_PAIR(1));
  mvwaddch(view_win, 2, 0, ACS_LTEE);
  mvwhline(view_win, 2, 1, ACS_HLINE, w - 2);
  mvwaddch(view_win, 2, w - 1, ACS_RTEE);

  draw_hints();
  wnoutrefresh(view_win);
  wnoutrefresh(menu_sub_win);
}

void MainMenuView::on_event(int key) {
  handle_menu_nav(main_menu, key);

  if (key == 'q') App::Get().stop();

  if (key == '\n' || key == KEY_ENTER) {
    int idx = item_index(current_item(main_menu));
    if (idx == 0) App::Get().navigate_to<EmployeeView>();
    if (idx == 3) App::Get().stop();
  }
}
