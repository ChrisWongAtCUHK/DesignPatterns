#pragma once

#include "Node.h"
#include "Context.h"
#include "Repeat.h"
#include "Primitive.h"

// <command> ::= <repeat> | <primitive>
class Command: public Node
{
	private:
		Node *node;
	
	public:
		// Constructor
		Command();
		
		// Override
		void parse(Context &);
		
		// Override
		void execute();
};