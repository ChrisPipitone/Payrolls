#pragma once
#include <string>
#include <vector>

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

  void draw() override;
  void render() override;

 private:
  EmployeeViewState state;
  const std::vector<KeyHint>& hints() const override;
};
