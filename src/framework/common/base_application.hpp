#pragma once

#include "application.hpp"
namespace ghost {
class BaseApplication : public IApplication {
public:
	virtual int initialize();
	virtual void finalize();
	virtual void tick();
	virtual bool isQuit();

protected:
	bool m_bQuit;
};
}  // namespace ghost