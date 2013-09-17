#include "VmsBuilder.h"


VmsBuilder::VmsBuilder(){
	_result = new DistrWorkPackage("Vms");
}
		
void VmsBuilder::configureFile(char *name){
	_result->setFile("ISAM", name);
}

void VmsBuilder::configureQueue(char *queue){
	_result->setQueue("priority", queue);
}

void VmsBuilder::configurePathway(char *type){
	_result->setPathway("LWP", type);
}
