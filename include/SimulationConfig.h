#ifndef _SIMULATION_CONFIG_H_
#define _SIMULATION_CONFIG_H_

#include <iostream>
#include <sstream>
#include <fstream>

#include <VirtualSequence.h> 
#include <NanoTimer.h>

#include <json.hpp>

using json = nlohmann::json;

using namespace std;

class SimulationConfig{
private:
public:
	SimulationConfig();
	virtual ~SimulationConfig();
	
	void run();
	
};


#endif
