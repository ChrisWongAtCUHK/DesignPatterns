#include "UnixBuilder.h"

UnixBuilder::UnixBuilder(){
	_result = new DistrWorkPackage("Unix");
}
void UnixBuilder::configureFile(char *name){
	_result->setFile("flatFile", name);
}
void UnixBuilder::configureQueue(char *queue){
	_result->setQueue("FIFO", queue);
}
void UnixBuilder::configurePathway(char *type){
	_result->setPathway("thread", type);
}
		