#include "ON.h"
#include "OFF.h"

ON::ON(){
	cout << "   ON-ctor ";
}

ON::~ON(){
	cout << "   dtor-ON\n";
}

void ON::off(Machine *m){
	cout << "   going from ON to OFF";
	m->setCurrent(new OFF());
	//delete this;
}
