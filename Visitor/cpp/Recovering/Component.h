#include "Visitor.h"

#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
	int value;
	public:
		// constructor
		Component(int);
		virtual void traverse();
		// Having add() here sacrifices safety, but it supports transparency
		//     // virtual void add( Component* ) { }
		virtual void accept(Visitor &, Component*) = 0;
};
#endif
