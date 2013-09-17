#include "DistrWorkPackage.h"

DistrWorkPackage::DistrWorkPackage(const char *type){
	sprintf(_desc, "Distributed Work Package for: %s", type);
}

void DistrWorkPackage::setFile(const char *f, char *v){
	sprintf(_temp, "\n  File(%s): %s", f, v);
	strcat(_desc, _temp);
}

void DistrWorkPackage::setQueue(const char *q, char *v){
	sprintf(_temp, "\n  Queue(%s): %s", q, v);
	strcat(_desc, _temp);
}

void DistrWorkPackage::setPathway(const char *p, char *v){
	sprintf(_temp, "\n  Pathway(%s): %s", p, v);
	strcat(_desc, _temp);
}

const char* DistrWorkPackage::getState(){
	return _desc;
}
