#pragma once
#include <memory>
#include <vector>

#include "payrolls/ui/Section.h"

struct LayoutNode {
  Axis axis = Axis::Col;

  struct Child {
    int weight = 1;
    std::unique_ptr<Section> leaf = nullptr;
    std::unique_ptr<LayoutNode> subtree = nullptr;
  };

  std::vector<Child> children;

  void add_leaf(const int weight, std::unique_ptr<Section> s) {
    Child child{weight, std::move(s), nullptr};
    children.push_back(std::move(child));
  };

  LayoutNode& add_split(int weight, Axis axis) {
    Child child = {weight, nullptr, std::unique_ptr<LayoutNode>(new LayoutNode{axis, {}})};
    children.push_back(std::move(child));  // this new node is a child of who called it

    return *children.back().subtree;
  };
};

inline void assign_rects(LayoutNode& n, Rect r) {
  int total = (n.axis == Axis::Row) ? r.w : r.h;  // which number am I cutting?
  int sum = 0;
  for (auto& c : n.children) sum += c.weight;  // denominator

  int prev = 0;  // where the previous child's edge landed (0-based, local)
  int acc = 0;   // running weight total

  for (auto& c : n.children) {
    acc += c.weight;
    int edge = total * acc / sum;  // int mult BEFORE div — don't reorder
    int extent = edge - prev;

    Rect sub = (n.axis == Axis::Row)
                   ? Rect{r.h, extent, r.y, r.x + prev}   // Row: x moves, w varies
                   : Rect{extent, r.w, r.y + prev, r.x};  // Col: y moves, h varies

    if (c.leaf)
      c.leaf->set_rect(sub);  // base case — recursion stops
    else
      assign_rects(*c.subtree, sub);  // recursive case — go deeper

    prev = edge;
  }
}
