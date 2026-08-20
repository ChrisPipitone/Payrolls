#pragma once
#include <memory>
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
  EmployeeView();
  ~EmployeeView() = default;

  void on_render() override;
  void on_event(int key) override;

 private:
  EmployeeViewState state;
  std::vector<std::unique_ptr<Section>> sections_;
  const std::vector<KeyHint>& hints() const override;
};
