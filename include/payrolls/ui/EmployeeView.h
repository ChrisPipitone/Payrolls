#pragma once
#include <string>
#include <vector>

#include "payrolls/ui/Section.h"
#include "payrolls/ui/View.h"

struct Employee {
  int id;
  std::string first_name;
};

struct EmployeeViewState {
  Employee curr_employee;
};

class EmployeeView : public View {
 public:
  EmployeeView() = default;
  ~EmployeeView() = default;

  void on_render() override;
  void on_event(int key) override;
  void render_employee_info();
  void render_benefits();
  void render_payrolls();

 private:
  EmployeeViewState state;
  const std::vector<KeyHint>& hints() const override;
  const std::vector<Section>& sections() const override;
};
