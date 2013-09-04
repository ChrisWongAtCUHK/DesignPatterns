#include "CivilianTime.h"
#include "ZuluTimeImp.h"
#include "Time.h"
#include "CivilianTime.h"
#include "ZuluTime.h"

// http://sourcemaking.com/design_patterns/bridge/cpp/1
int main(int argc, char *argv[]) {
	Time *times[3];
	times[0] = new Time(14, 30);
	times[1] = new CivilianTime(2, 30, 1);
	times[2] = new ZuluTime(14, 30, 6);
	for (int i = 0; i < 3; i++){
		times[i]->tell();
	}
	return 0;
}