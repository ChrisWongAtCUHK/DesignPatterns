#include "Composite.h"

// constructor
Composite::Composite(int val): Component(val){}

void Composite::add(Component *ele){
	children.push_back(ele);
}

// virtual
void Composite::accept(Visitor &v, Component *c){
	v.visit(this, c);
}

// virtual
void Composite::traverse(){
	Component::traverse();
	for (unsigned int i = 0; i < children.size(); i++)
		children[i]->traverse();
}
