#include "payrolls/ui/EmployeeView.h"

#include "payrolls/ui/App.h"
#include "payrolls/ui/EmployeeBenefitSection.h"
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

  // set start focus, should this be more systemized?
  focused_ = get_first_leaf(root_node);
  focused_->set_focused(true);
}

const std::vector<KeyHint>& EmployeeView::hints() const {
  static const std::vector<KeyHint> h = {{"q", "Exit"},
                                         {"H", "Focus Left"},
                                         {"L", "Focus Right"},
                                         {"J", "Focus Down"},
                                         {"K", "Focus Up"}};
  return h;
}

void EmployeeView::on_render() {
  box(view_win, 0, 0);
  int w = getmaxx(view_win);
  print_in_middle(view_win, 1, 0, w, "Employee View", COLOR_PAIR(1));
  mvwaddch(view_win, 2, 0, ACS_LTEE);
  mvwhline(view_win, 2, 1, ACS_HLINE, w - 2);
  mvwaddch(view_win, 2, w - 1, ACS_RTEE);

  for_each_section(root_node, [](Section& s) { s.on_render(); });
  draw_hints();
  wnoutrefresh(view_win);
}

void EmployeeView::on_event(int key) {
  // none of this is specific to EmployeeView
  // The Section stuff is only if this View has Sections
  // or is just a raw View
  if (key == 'q') App::Get().stop();
  switch (key) {
    case 'H':
      change_focused_section(Dir::Left);
      return;
    case 'J':
      change_focused_section(Dir::Down);
      return;
    case 'K':
      change_focused_section(Dir::Up);
      return;
    case 'L':
      change_focused_section(Dir::Right);
      return;
    default:
      break;
  }
  if (focused_) focused_->on_event(key);

  // error handling?
}
