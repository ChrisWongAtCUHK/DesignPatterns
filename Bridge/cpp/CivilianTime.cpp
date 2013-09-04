#include "CivilianTime.h"

CivilianTime::CivilianTime(int hr, int min, int pm) {
	imp_ = new CivilianTimeImp(hr, min, pm);
}