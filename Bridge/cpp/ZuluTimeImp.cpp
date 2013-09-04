#include "ZuluTimeImp.h"

ZuluTimeImp::ZuluTimeImp(int hr, int min, int zone): TimeImp(hr, min) {
	if (zone == 5){
	  strcpy(zone_, " Eastern Standard Time");
	}else if (zone == 6){
	  strcpy(zone_, " Central Standard Time");
	 }
}

/* virtual */
void ZuluTimeImp::tell() {
	cout << "time is " << setw(2) << setfill('0') << hr_ << min_ << zone_ << endl;
}