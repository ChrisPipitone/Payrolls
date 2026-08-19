#pragma once
#include <panel.h>

#include <string_view>
#include <vector>

#include "payrolls/ui/Section.h"

struct KeyHint {
  std::string_view key;
  std::string_view action;
};

class View {
  friend class App;

 public:
  View();
  virtual ~View();
  View(const View&) = delete;             // no copy constructor
  View& operator=(const View&) = delete;  // no copy assign
  View(View&&) = delete;                  // no move constructor
  View& operator=(View&&) = delete;       // no move assignment

  void draw_hints();

  // review later for Template Method
  virtual void on_render() = 0;
  virtual void on_update() {};
  virtual void on_event(int key) = 0;

 protected:
  WINDOW* view_win;
  virtual const std::vector<KeyHint>& hints() const = 0;
  virtual const std::vector<Section>& sections() const = 0;

 private:
  PANEL* panel = nullptr;
  WINDOW* hint_der_win;
};
