#pragma once
#include <ncurses.h>

#include "payrolls/ui/Rect.h"

class Section {
 public:
  Section(WINDOW* parent) : parent_(parent) {}
  virtual ~Section() {
    if (section_win) delwin(section_win);
  }
  Section(const Section&) = delete;
  Section& operator=(const Section&) = delete;

  virtual void on_render() = 0;
  virtual void on_event(int) = 0;
  void set_rect(const Rect& r) {
    if (section_win) delwin(section_win);
    section_win = derwin(parent_, r.h, r.w, r.y, r.x);
    rect_ = r;
  }
  void set_focused(bool v) { focused_ = v; }
  Rect& get_rect() { return rect_; }

 protected:
  void draw_border() {
    if (!section_win) return;
    if (!focused_) {
      box(section_win, 0, 0);
      return;
    }
    wattron(section_win, COLOR_PAIR(2) | A_BOLD);
    box(section_win, 0, 0);
    wattroff(section_win, COLOR_PAIR(2) | A_BOLD);
  }

  Rect rect_ = {0, 0, 0, 0};
  WINDOW* parent_ = nullptr;
  WINDOW* section_win = nullptr;
  bool focused_ = false;
};
