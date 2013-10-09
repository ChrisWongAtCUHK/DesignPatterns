#include "Command.h"

// Constructor
Command::Command() {}

// Override
void Command::parse(Context &context){
	if(!context.currentToken.compare("REPEAT")){
		// Parse <repeat>
		node = new Repeat();
		node->parse(context);
	} else {
		// Parse <primitive>
		node = new Primitive();
		node->parse(context);
	}
}

// Override
void Command::execute(){
	node->execute();
}