#include "Subject.h"
#include "DivObserver.h"
#include "ModObserver.h"

int main(int argc, char *argv[]) {
	Subject subj;
	DivObserver divObs1(&subj, 4); // 7. Client configures the number and
	DivObserver divObs2(&subj, 3); //    type of Observers
	ModObserver modObs3(&subj, 3);
	subj.setVal(14);
	
	return 0;
}