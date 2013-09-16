#include "MotifFactory.h"

// makeProductOne
Widget* MotifFactory::create_button(){
	return new MotifButton; 
}

// makeProductTwo
Widget* MotifFactory::create_menu(){
	return new MotifMenu; 
}
