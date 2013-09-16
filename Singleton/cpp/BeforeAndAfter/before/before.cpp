#include "GlobalChrisWong.h"
#include "before.h"

// Main program
int main(int argc, char *argv[]){
	if (!global_cw)
		global_cw = new GlobalChrisWong;
	
	cout << "main: The age of Chris Wong is " << global_cw->get_age() << ".\n";
	cout << "main: The face Chris Wong is " << global_cw->get_face() << ".\n";
	
	age();
	face();
	
	cout << "main: The age of Chris Wong is " << global_cw->get_age() << ".\n";
	cout << "main: The face Chris Wong is " << global_cw->get_face() << ".\n";

	return 0;
}