#include "payrolls/ui/EmployeeView.h"

#include "payrolls/ui/App.h"
#include "payrolls/ui/EmployeeInfoSection.h"
#include "payrolls/ui/Layout.h"
#include "payrolls/ui/utils.h"

EmployeeView::EmployeeView() {
  // build sections
  root_node.axis = Axis::Row;

  LayoutNode& left = root_node.add_split(1, Axis::Col);

  left.add_leaf(3, std::make_unique<EmployeeInfoSection>(view_win));
  left.add_leaf(1, std::make_unique<EmployeeBenefitsSection>(view_win));
  root_node.add_leaf(1, std::make_unique<EmployeePayrollSection>(view_win));

  assign_rects(root_node, content_rect());
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

  traverse_render(root_node);

  draw_hints();
  wnoutrefresh(view_win);
}

void EmployeeView::on_event(int key) {
  if (key == 'q') App::Get().stop();
}

// should be replaced at some point by a generic template or something
void EmployeeView::traverse_render(LayoutNode& node) {
  for (auto& child : node.children) {
    if (child.leaf) {
      child.leaf->on_render();
    } else {
      traverse_render(*child.subtree);
    }
  }
}
