#pragma once

#ifdef _RUNTIME_MODULE_H_
#define _RUNTIME_MODULE_H_

namespace ghost {

class RuntimeModule {
public:
	virtual ~RuntimeModule(){};
	virtual int initialize() = 0;
	virtual void finalize() = 0;
	virtual void tick() = 0;
};
}  // namespace ghost

#endif	// _RUNTIME_MODULE_H_