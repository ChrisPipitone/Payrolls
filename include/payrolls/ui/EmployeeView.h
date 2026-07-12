#pragma once
#include <curses.h>
#include <string>

// Draft
struct EmployeeService {
  bool amDraft = true;
};

// Draft
struct Employee {
  int id;
  std::string first_name;
};

// Draft
struct EmployeeViewState {
  Employee currEmployee;
};

// Draft
class EmployeeView {
private:
  EmployeeViewState state; // only mutate through methods.
  WINDOW *view_win;
  EmployeeService &service; // borrowed, not owned — must outlive this view

public:
  EmployeeView(EmployeeService &service)
      : view_win(newwin(20, 80, 8, 8)), service(service) {}

  // Draw the window on state change
  void draw() {
    // read state if changed (how do I know if it changed?)
    // refresh the window
    // else no re-draw
  };

  ~EmployeeView() { delwin(view_win); };
};
