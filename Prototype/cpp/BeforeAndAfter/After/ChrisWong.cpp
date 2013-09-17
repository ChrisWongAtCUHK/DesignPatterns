#include "ChrisWong.h"


ChrisWong::ChrisWong(){}								// constructor
ChrisWong::~ChrisWong(){}								// destructor

Stooge* ChrisWong::clone(){
	return new ChrisWong;
}

void ChrisWong::slap_stick(){
	char name[] = "Chris Wong";
	char stick[] = "play AOC\n";
	printf("%-*s%c %s", Stooge::STR_WIDTH, name, Stooge::COLON, stick);
}
