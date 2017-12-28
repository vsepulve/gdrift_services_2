
#include <Simulator.h>
#include <Sample.h>
#include <NanoTimer.h>

#include "SimulationConfig.h"

#include <json.hpp>

using json = nlohmann::json;

using namespace std;

int main(int argc, char** argv){
	
	NanoTimer timer;
	
	cout<<"Inicio \n";
	
	SimulationConfig config;
	config.run();
	
	// Preparar parametros, deberian estar en el json
	// Crear un SimulationConfig del escenario
	// Eso puede requerir un builder
	// Luego se usa un Generator para crear instancias de simulation
	
	// Preparar colas de trabajo y de resultados
	
	// Preparar threads procesadores
	
	// Llenar la cola de trabajo mientras los procesadores leen/procesan/duermen
	
	// Al terminar la fase, esperar el proximo settings del entrenamiento
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	cout<<"Fin ("<<timer.getMilisec()<<" ms)\n";
	
}

