#include "Command.h"

Command::Command(Titan *object, Action method){
	m_object = object;
	m_method = method;
}

void Command::execute(){
	(m_object->*m_method)();
}

