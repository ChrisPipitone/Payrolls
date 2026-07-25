#pragma once
#include <ncurses.h>

#include <string_view>
#include <vector>

struct KeyHint {
  std::string_view key;
  std::string_view action;
};

class View {
 public:
  View();
  virtual ~View();
  View(const View&) = delete;             // no copy constructor
  View& operator=(const View&) = delete;  // no copy assign
  View(View&&) = delete;                  // no move constructor
  View& operator=(View&&) = delete;       // no move assignment
  /* Rule of 5
   Moving a View would transfer view_win + hint_der_win ownership (null out the old). Valid but
   complex — derwin parent-child relationships make this fragile. For a TUI view tied to a terminal
   region : delete them.
   */

  void draw_hints();

  // review later for Template Method
  virtual void draw() = 0;
  virtual void render() = 0;

 protected:
  WINDOW* view_win;
  WINDOW* hint_der_win;
  virtual std::vector<KeyHint> hints() const = 0;
};
