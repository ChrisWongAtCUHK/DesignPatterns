#include <iostream>

#include "Node.cpp"
#include "Context.cpp"
#include "CommandList.cpp"

using namespace std;

class Program: public Node
{
	private:
		Node *commandList;

	public:
		// Constructor
		Program(){}
	
		// Override
		void parse(Context context) {
			context.skipToken("PROGRAM");
			commandList = new CommandList();
			commandList->parse(context);
		};
		
		// Override
		void execute() {
			commandList->execute();
		};
		
		// Destructor
		//~Program(){ delete commandList; }
	
};