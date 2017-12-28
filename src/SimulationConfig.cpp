
#include "SimulationConfig.h"

SimulationConfig::SimulationConfig(){
	std::ifstream lector("data/settings_test.json");
	json config;
	lector >> config;
	cout<<"SimulationConfig - Config: [" << config << "]\n";
}

SimulationConfig::~SimulationConfig(){
	
}

void SimulationConfig::run(){
	cout<<"SimulationConfig::run - Inicio\n";
}

