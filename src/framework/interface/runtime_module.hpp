#pragma once

namespace ghost {

class IRuntimeModule {
public:
	virtual ~IRuntimeModule(){};
	virtual int initialize() = 0;
	virtual void finalize() = 0;
	virtual void tick() = 0;
};

}  // namespace ghost