#include "payrolls/ui/App.h"

App& App::Get() {
  static App instance;
  return instance;
}
