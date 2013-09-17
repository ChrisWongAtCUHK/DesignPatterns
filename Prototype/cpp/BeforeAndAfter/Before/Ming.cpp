#include "Ming.h"

Ming::Ming(){}									// constructor
Ming::~Ming(){}									// destructor

void Ming::slap_stick(){
	char name[] = "Ming";
	char stick[] = "play Chain Chronicle\n";
	printf("%-*s%c %s", Stooge::STR_WIDTH, name, Stooge::COLON, stick);
}
		