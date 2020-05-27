#pragma once
#ifndef _APPLICATION_
#define _APPLICATION_

#include "runtime_module.h"

namespace ghost {
class Application : public RuntimeModule {
public:
	virtual int initialize() = 0;
	virtual void finalize() = 0;
	virtual void tick() = 0;
	virtual bool isQuit() = 0;

protected:
	bool quitFlag;
};
}  // namespace ghost

#endif	// _APPLICATION_