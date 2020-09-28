#include "base_application.hpp"

namespace ghost {
BaseApplication g_App;
IApplication* g_pApp = &g_App;
}  // namespace ghost