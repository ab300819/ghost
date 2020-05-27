#include <iostream>
#include "application.h"

namespace ghost {
extern Application* app;
}

int main(int argc, char** argv) {
	int ret;
	if ((ret = ghost::app->initialize()) != 0) {
		std::cout << "App Initialize failed, will exit now." << std::endl;
		return ret;
	}

	while (!ghost::app->isQuit()) {
		ghost::app->tick();
	}

	ghost::app->finalize();

	return 0;
}