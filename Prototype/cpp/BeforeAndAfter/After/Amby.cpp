#include "Amby.h"

Amby::Amby(){}									// constructor
Amby::~Amby(){}									// destructor

Stooge* Amby::clone(){
	return new Amby;
}

void Amby::slap_stick(){
	char name[] = "Amby";
	char stick[] = "play Candy Crush\n";
	printf("%-*s%c %s", Stooge::STR_WIDTH, name, Stooge::COLON, stick);
}
