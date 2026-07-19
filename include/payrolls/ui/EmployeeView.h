#pragma once
#include <menu.h>
#include <string>

struct Employee {
  int id;
  std::string first_name;
};

struct EmployeeViewState {
  Employee curr_employee;
};

class EmployeeView {
private:
  EmployeeViewState state;
  WINDOW *view_win;

public:
  EmployeeView() : view_win(newwin(LINES, COLS, 0, 0)) {
    keypad(view_win, TRUE);
  }
  ~EmployeeView() { delwin(view_win); }

  void draw();
  void render();
};
