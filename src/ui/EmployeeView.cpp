#include "payrolls/ui/EmployeeView.h"

#include "payrolls/ui/App.h"
#include "payrolls/ui/EmployeeInfoSection.h"
#include "payrolls/ui/utils.h"

const std::vector<KeyHint>& EmployeeView::hints() const {
  static const std::vector<KeyHint> h = {{"q", "Exit"}};
  return h;
}

const std::vector<Section>& EmployeeView::sections() const {
  EmployeeInfoSection employee_info(view_win, 30, 90, 4, 5);
  static const std::vector<Section> s = {employee_info};
  return s;
}

void EmployeeView::on_render() {
  box(view_win, 0, 0);
  int w = getmaxx(view_win);
  print_in_middle(view_win, 1, 0, w, "Employee View", COLOR_PAIR(1));
  mvwaddch(view_win, 2, 0, ACS_LTEE);
  mvwhline(view_win, 2, 1, ACS_HLINE, w - 2);
  mvwaddch(view_win, 2, w - 1, ACS_RTEE);

  render_benefits();
  render_payrolls();
  render_employee_info();
  draw_hints();
  wnoutrefresh(view_win);
}

void EmployeeView::render_employee_info() {
  WINDOW* info_win = derwin(view_win, 30, 90, 4, 5);
  box(info_win, 0, 0);

  int w = getmaxx(info_win);
  print_in_middle(info_win, 1, 0, w, "Basic Information", COLOR_PAIR(1));
}

void EmployeeView::render_benefits() {
  WINDOW* benefits_win = derwin(view_win, 10, 90, 35, 5);
  box(benefits_win, 0, 0);

  int w = getmaxx(benefits_win);
  print_in_middle(benefits_win, 1, 0, w, "Benefits", COLOR_PAIR(1));
}

void EmployeeView::render_payrolls() {
  WINDOW* payrolls_win = derwin(view_win, 41, 90, 4, 95);
  box(payrolls_win, 0, 0);

  int w = getmaxx(payrolls_win);
  print_in_middle(payrolls_win, 1, 0, w, "Payroll", COLOR_PAIR(1));
}

void EmployeeView::on_event(int key) {
  if (key == 'q') App::Get().stop();
}
