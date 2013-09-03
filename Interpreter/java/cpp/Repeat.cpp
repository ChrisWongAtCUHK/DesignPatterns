#include "Repeat.h"

// Constructor
Repeat::Repeat() {}

// Override
void Repeat::parse(Context &context){
	context.skipToken("REPEAT");
	number = context.currentNumber();
	context.nextToken();

	commandList = new CommandList();
	commandList->parse(context);
}

// Override
void Repeat::execute(){
	for(int i = 0; i < number; i++){
		commandList->execute();
	}
}
