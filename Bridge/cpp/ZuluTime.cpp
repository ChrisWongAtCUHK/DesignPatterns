#include "ZuluTime.h"

ZuluTime::ZuluTime(int hr, int min, int zone) {
	imp_ = new ZuluTimeImp(hr, min, zone);
}