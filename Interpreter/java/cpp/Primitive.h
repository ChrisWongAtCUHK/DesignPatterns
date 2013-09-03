#pragma once

#include "Node.h"
#include "Context.h"

// <primitive> ::= PRINT <string> | SPACE | BREAK | LINEBREAK
class Primitive: public Node
{
	private:
		string name;
		string text;
		
	public:
		// Constructor
		Primitive();
		
		// Override
		void parse(Context);
		
		// Override
		void execute();
};