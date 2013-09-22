#include "WindowsFactory.h"

// makeProductOne
Widget* WindowsFactory::create_button() {
	return new WindowsButton; 
}

// makeProductTwo
Widget* WindowsFactory::create_menu(){
	return new WindowsMenu; 
}
