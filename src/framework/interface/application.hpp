#pragma once

#include "runtime_module.hpp"

namespace ghost {
class IApplication : public IRuntimeModule {
public:
	virtual int initialize() = 0;
	virtual void finalize() = 0;
	virtual void tick() = 0;
	virtual bool isQuit() = 0;

protected:
	bool quitFlag;
};
}  // namespace ghost
