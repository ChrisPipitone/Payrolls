#pragma once
#include <ncurses.h>

class Section {
 public:
  Section(WINDOW* parent, int h, int w, int y, int x) : section_win(derwin(parent, h, w, y, x)) {}
  virtual ~Section() {
    if (section_win) delwin(section_win);
  }
  Section(const Section&) = delete;
  Section& operator=(const Section&) = delete;

  virtual void render() = 0;
  virtual bool on_key(int key) { return false; };
  void set_focused(bool f) { focused = f; };

 private:
 protected:
  bool focused = false;
  WINDOW* section_win;
};
