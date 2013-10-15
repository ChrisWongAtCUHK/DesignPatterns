#include <iostream>
#include <vector>
using namespace std;

#ifndef VISITOR_H
#define VISITOR_H
class Visitor
{
	public:
		virtual void visit(class Primitive *, class Component*) = 0;
		virtual void visit(class Composite *, Component*) = 0;
};
#endif
