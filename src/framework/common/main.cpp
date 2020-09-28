#include <iostream>
#include "application.hpp"

namespace ghost {
extern IApplication* g_pApp;
}

int main(int argc, char** argv) {
	int ret;
	if ((ret = ghost::g_pApp->initialize()) != 0) {
		std::cout << "App Initialize failed, will exit now." << std::endl;
		return ret;
	}

	while (!ghost::g_pApp->isQuit()) {
		ghost::g_pApp->tick();
	}

	ghost::g_pApp->finalize();

	return EXIT_SUCCESS;
}