#include "Component.h"

// constructor
Component::Component(int val){
	value = val;
}

// virtual
void Component::traverse(){
	cout << value << " ";
}
