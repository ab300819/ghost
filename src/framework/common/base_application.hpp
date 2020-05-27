#pragma once
#ifndef _BASE_APPLICATION_
#define _BASE_APPLICATION_

#include "application.h"

namespace ghost {
class BaseApplication : public Application {
public:
	virtual int initialize();
	virtual void finalize();
	virtual void tick();
	virtual bool isQuit();
};

int BaseApplication::initialize() {
	quitFlag = false;
	return 0;
}

void BaseApplication::finalize() {}
void BaseApplication::tick() {}
bool BaseApplication::isQuit() {
	return quitFlag;
}

}  // namespace ghost

#endif	// _BASE_APPLICATION_