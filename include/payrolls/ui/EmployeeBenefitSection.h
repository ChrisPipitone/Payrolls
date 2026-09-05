#pragma once
#include <menu.h>

#include <array>
#include <string_view>
#include <vector>

#include "payrolls/ui/Section.h"

class EmployeeBenefitsSection : public Section {
 public:
  EmployeeBenefitsSection(WINDOW* parent);
  ~EmployeeBenefitsSection();
  EmployeeBenefitsSection(const EmployeeBenefitsSection&) = delete;
  EmployeeBenefitsSection operator=(const EmployeeBenefitsSection&) = delete;
  virtual void on_render() override;
  virtual void on_event(int key) override;

 private:
  MENU* menu;
  WINDOW* menu_sub_win;
  std::vector<ITEM*> menu_items;
  static constexpr std::array<std::string_view, 2> kOptions = {"Request HR", "Request Admin"};
  bool initialized_ = false;
  bool setup_menu();
};
