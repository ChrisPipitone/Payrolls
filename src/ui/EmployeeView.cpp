#include "payrolls/ui/EmployeeView.h"

#include "payrolls/ui/App.h"
#include "payrolls/ui/EmployeeInfoSection.h"
#include "payrolls/ui/utils.h"

EmployeeView::EmployeeView() {
  sections_.push_back(std::make_unique<EmployeeInfoSection>(view_win, 30, 90, 4, 5));
  sections_.push_back(std::make_unique<EmployeeBenefitsSection>(view_win, 10, 90, 35, 5));
  sections_.push_back(std::make_unique<EmployeePayrollSection>(view_win, 41, 90, 4, 95));
}

const std::vector<KeyHint>& EmployeeView::hints() const {
  static const std::vector<KeyHint> h = {{"q", "Exit"}};
  return h;
}

void EmployeeView::on_render() {
  box(view_win, 0, 0);
  int w = getmaxx(view_win);
  print_in_middle(view_win, 1, 0, w, "Employee View", COLOR_PAIR(1));
  mvwaddch(view_win, 2, 0, ACS_LTEE);
  mvwhline(view_win, 2, 1, ACS_HLINE, w - 2);
  mvwaddch(view_win, 2, w - 1, ACS_RTEE);

  for (auto& section : sections_) {
    section->on_render();
  }

  draw_hints();
  wnoutrefresh(view_win);
}

void EmployeeView::on_event(int key) {
  if (key == 'q') App::Get().stop();
}
