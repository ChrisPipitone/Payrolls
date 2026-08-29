#pragma once
#include <string>
#include <vector>

#include "payrolls/ui/Layout.h"
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
  EmployeeView();
  ~EmployeeView() = default;

  void on_render() override;
  void on_event(int key) override;

 private:
  EmployeeViewState state;
  const std::vector<KeyHint>& hints() const override;

  void traverse_render(LayoutNode& node);
};
