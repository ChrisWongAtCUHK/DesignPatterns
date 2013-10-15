#include "Component.h"

#ifndef COMPOSITE_H
#define COMPOSITE_H
class Composite: public Component
{
	vector <Component *> children;
	public:
		// constructor
		Composite(int);
		void add(Component *);
		// virtual
		void accept(Visitor &, Component *);
		// virtual
		void traverse();
};
#endif
