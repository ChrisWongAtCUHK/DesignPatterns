#include "Primitive.h"
#include "Component.h"
#include "Composite.h"

#ifndef ADDVISITOR_H
#define ADDVISITOR_H
class AddVisitor: public Visitor
{
	public:
		// virtual
		void visit(Primitive *, Component*);
		// virtual
		void visit(Composite *, Component *);
};
#endif
