#include "AddVisitor.h"

// virtual
void AddVisitor::visit(Primitive *, Component*){
	/* does not make sense */
}

// virtual
void AddVisitor::visit(Composite *node, Component *c){
	node->add(c);
}
