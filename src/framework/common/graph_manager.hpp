#pragma once

#ifndef _GRAPH_MANAGER_
#define _GRAPH_MANAGER_

#include "runtime_module.h"

namespace ghost {
class GraphManager : public RuntimeModule {
public:
	virtual ~GraphManager() {}
};
}  // namespace ghost

#endif	// _GRAPH_MANAGER_