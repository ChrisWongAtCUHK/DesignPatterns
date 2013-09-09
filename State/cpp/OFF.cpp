#include "OFF.h"
#include "ON.h"

OFF::OFF(){
	cout << "   OFF-ctor ";
}

OFF::~OFF(){
	cout << "   dtor-OFF\n";
	//delete this;
}

void OFF::on(Machine *m){
	cout << "   going from OFF to ON";
	m->setCurrent(new ON());
	
}

