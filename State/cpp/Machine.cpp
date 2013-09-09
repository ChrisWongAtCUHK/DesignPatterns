#include "Machine.h"
#include "State.h"
#include "OFF.h"

Machine::Machine(){
	current = new OFF();
	cout << '\n';
}

void Machine::setCurrent(State *s){
	current = s;
}

void Machine::on(){
	current->on(this);
}

void Machine::off(){
	Machine::current->off(this);
}
