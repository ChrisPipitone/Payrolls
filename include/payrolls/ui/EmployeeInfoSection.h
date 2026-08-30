#pragma once
#include <menu.h>

#include "payrolls/ui/Section.h"
#include "payrolls/ui/utils.h"

struct MenuOption {
  std::string_view name;
  std::string_view desc;
};
class EmployeeInfoSection : public Section {
 public:
  using Section::Section;
  void on_render() override {
    box(section_win, 0, 0);

    int w = getmaxx(section_win);
    print_in_middle(section_win, 1, 0, w, "Basic Information", COLOR_PAIR(1));
  };
};

class EmployeePayrollSection : public Section {
 public:
  using Section::Section;
  void on_render() override {
    box(section_win, 0, 0);

    int w = getmaxx(section_win);
    print_in_middle(section_win, 1, 0, w, "Payroll", COLOR_PAIR(1));
  };
};
