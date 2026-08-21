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

  void add_leaf(int weight, std::unique_ptr<Section> s) {
    Child child{weight, std::move(s), nullptr};
    children.push_back(std::move(child));
  }

  LayoutNode& add_split(int weight, Axis axis) {
    auto new_node = std::make_unique<LayoutNode>();
    new_node->axis = axis;

    // parent node vector owns the child
    Child child = {weight, nullptr, std::move(new_node)};
    children.push_back(std::move(child));

    return *children.back().subtree;  // return a reference to the child
  }
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

inline void traversal(LayoutNode& node) {
  for (auto& child : node.children) {
    if (child.leaf) {
      // template function here
    } else {
      traversal(*child.subtree);
    }
  }
}
