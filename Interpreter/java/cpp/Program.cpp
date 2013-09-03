#include "Program.h"


// Constructor
Program::Program(){}

// Override
void Program::parse(Context &context) {
	context.skipToken("PROGRAM");
	commandList = new CommandList();
	commandList->parse(context);
}

// Override
void Program::execute() {
	commandList->execute();
}
