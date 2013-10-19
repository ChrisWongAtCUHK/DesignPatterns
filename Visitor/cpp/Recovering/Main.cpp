#include "Visitor.h"
#include "Component.h"
#include "Primitive.h"
#include "Composite.h"
#include "AddVisitor.h"

/*
 * Motivation. 
 * My Component classes do not know that Composites exist. 
 * They provide no help for navigating Composites, nor any help for altering the contents of a Composite. 
 * This is because I would like the base class (and all its derivatives) to be reusable in contexts that do not require Composites. 
 * When given a base class pointer, if I absolutely need to know whether or not it is a Composite, 
 * I will use dynamic_cast() to figure this out.
 * In those cases where dynamic_cast() is too expensive, I will use a Visitor. 
 */
int main(int argc, char *argv[]){
	const int nodes_size = 4;
	Component *nodes[nodes_size];
	// The type of Composite* is "lost" when the object is assigned to a
	// Component*
	nodes[0] = new Composite(1);
	nodes[1] = new Composite(2);
	nodes[2] = new Composite(3);
	nodes[3] = new Composite(4);

	// If add() were in class Component, this would work
	//    nodes[0]->add( nodes[1] );
	// If it is NOT in Component, and only in Composite,  you get the error -
	//    no member function `Component::add(Component *)' defined

	// Instead of sacrificing safety, we use a Visitor to support add()
	AddVisitor addVisitor;
	nodes[0]->accept(addVisitor, nodes[1]);
	nodes[0]->accept(addVisitor, nodes[2]);
	nodes[0]->accept(addVisitor, new Primitive(4));
	nodes[1]->accept(addVisitor, new Primitive(5));
	nodes[1]->accept(addVisitor, new Primitive(6));
	nodes[2]->accept(addVisitor, new Primitive(7));

	for (int i = 0; i < nodes_size; i++){
		nodes[i]->traverse();
		cout << endl;
	}

	return 0;
}
