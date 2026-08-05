#include "payrolls/ui/App.h"
#include "payrolls/ui/MainMenuView.h"

int main() {
  App::Get().navigate_to<MainMenuView>();
  App::Get().run();
}
