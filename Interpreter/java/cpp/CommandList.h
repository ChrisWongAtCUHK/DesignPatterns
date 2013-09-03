#pragma once

#include "MyList.h"

#include "Node.h"
#include "Context.h"
#include "Command.h"

// <command list> ::= <command>* END
class CommandList: public Node
{
	private:
		list<Node> commands;
		
	public:
		// Constructor
		CommandList();
		
		// Override
		void parse(Context);
		
		// Override
		void execute();
};