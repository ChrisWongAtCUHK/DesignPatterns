#include "Primitive.h"

// constructor
Primitive::Primitive(int val): Component(val){}

// virtual
void Primitive::accept(Visitor &v, Component *c){
	v.visit(this, c);
}
