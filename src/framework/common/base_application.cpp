#include "base_application.hpp"

int ghost::BaseApplication::initialize() {
	m_bQuit= false;
	return 0;
}

void ghost::BaseApplication::finalize() {}

void ghost::BaseApplication::tick() {}

bool ghost::BaseApplication::isQuit() {
	return m_bQuit;
}