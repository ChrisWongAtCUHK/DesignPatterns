#include "GlobalChrisWong.h"
#include "after.h"

// Main program
int main(int argc, char *argv[]){
	
	cout << "main: The age of Chris Wong is " << GlobalChrisWong::instance()->get_age() << ".\n";
	cout << "main: The face Chris Wong is " << GlobalChrisWong::instance()->get_face() << ".\n";
	
	age();
	face();
	
	cout << "main: The age of Chris Wong is " << GlobalChrisWong::instance()->get_age() << ".\n";
	cout << "main: The face Chris Wong is " << GlobalChrisWong::instance()->get_face() << ".\n";

	return 0;
}