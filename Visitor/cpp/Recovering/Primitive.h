#include "Component.h"

#ifndef PRIMITIVE_H
#define PRIMITIVE_H
class Primitive: public Component
{
	public:
		//constructor
		Primitive(int);
		
		// virtual
		void accept(Visitor &, Component *);
};
#endif
