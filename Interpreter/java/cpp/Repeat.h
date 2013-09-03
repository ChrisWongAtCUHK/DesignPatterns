#pragma once

#include "Node.h"
#include "Context.h"
#include "CommandList.h"

//class CommandList: public Node{};

// <repeat> ::= REPEAT <number> <command list> 
class Repeat: public Node
{
	private:
		int number;
		Node *commandList;
		
	public:
		// Constructor
		Repeat();
		
		// Override
		void parse(Context context);
		
		// Override
		void execute();
};