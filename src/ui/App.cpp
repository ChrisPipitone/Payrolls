#include "payrolls/ui/App.h"

#include <panel.h>

App::App() {
  start_color();
  cbreak();
  noecho();
  curs_set(0);
  keypad(stdscr, TRUE);
  init_pair(1, COLOR_RED, COLOR_BLACK);
}

App& App::Get() {
  static App instance;
  return instance;
}

void App::run() {
  is_running = true;

  // Main Application loop
  while (is_running) {
    // NOTE: rendering can be done elsewhere (eg. render thread)
    for (const std::unique_ptr<View>& view : view_stack) view->on_render();

    update_panels();
    doupdate();

    int c = wgetch(view_stack.back()->view_win);
    raise_event(c);
    //  Main layer update here
    if (!view_stack.empty()) view_stack.back()->on_update();
  }
}
void App::stop() { is_running = false; }

void App::raise_event(int key) {
  if (!view_stack.empty()) view_stack.back()->on_event(key);
}
