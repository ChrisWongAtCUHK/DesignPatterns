#include "CivilianTimeImp.h"

CivilianTimeImp::CivilianTimeImp(int hr, int min, int pm): TimeImp(hr, min) {
	if (pm){
	  strcpy(whichM_, " PM");
	}else{
	  strcpy(whichM_, " AM");
	 }
}

/* virtual */
void CivilianTimeImp::tell() {
	cout << "time is " << hr_ << ":" << min_ << whichM_ << endl;
}
