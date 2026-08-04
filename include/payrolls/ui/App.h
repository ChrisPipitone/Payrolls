#pragma once

#include <panel.h>

#include <memory>
#include <vector>

#include "payrolls/ui/View.h"

class App {
 public:
  static App& Get();
  App(const App&) = delete;
  App& operator=(const App&) = delete;

  void run();
  void stop();
  void raise_event();

  // + functions to manipulate the View stack
 private:
  App() = default;
  ~App() = default;
  bool is_running = false;
  std::vector<std::unique_ptr<View>> view_stack;
};
