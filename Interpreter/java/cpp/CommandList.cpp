#pragma once

#include <iostream>

#include "MyList.cpp"

#include "Node.cpp"
#include "Context.cpp"

class CommandList: public Node
{
	private:
		list<Node> commands;
		
	
	public:
		// Constructor
		CommandList() {}
		
		// Override
		void parse(Context context) {
			while(true){
				if(!context.currentToken.compare("")){
					// Check if there is END terminator
					cout << "Missing 'END'" << endl;
					break;
				} else if(!context.currentToken.compare("END")){
					context.skipToken("END");
					break;
				} else {
					Node command;
					command.parse(context);
					commands.push_back(command);
				}
			}
		};
		
		// Override
		void execute() {
			list<Node>::iterator it;
			for(it = commands.begin(); it != commands.end(); ++it){
				Node command = *it;
				command.execute();
			}
		};
		
	
};