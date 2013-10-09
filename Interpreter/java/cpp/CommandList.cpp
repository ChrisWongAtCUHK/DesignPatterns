#include "CommandList.h"

// Constructor
CommandList::CommandList() {}

// Override
void CommandList::parse(Context &context) {
	while(true){
		if(!context.currentToken.compare("")){
			// Check if there is END terminator
			cout << "Missing 'END'" << endl;
			break;
		} else if(!context.currentToken.compare("END")){
			context.skipToken("END");
			break;
		} else {
			Node *command = new Command();
			command->parse(context);
			commands.push_back(command);
		}
	}
}

// Override
void CommandList::execute() {
	list<Node*>::iterator it;
	for(it = commands.begin(); it != commands.end(); ++it){
		Node *command = *it;
		command->execute();
	}
}
		