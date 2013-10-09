#include "Node.h"
#include "Context.h"
#include "CommandList.h"

// <program> ::= PROGRAM <command list>
class Program: public Node
{
	private:
		Node *commandList;

	public:
		// Constructor
		Program();
	
		// Override
		void parse(Context &);
		
		// Override
		void execute();
		
		// Destructor
		//~Program(){ delete commandList; }
	
};