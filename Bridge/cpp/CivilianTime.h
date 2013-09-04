#include "CivilianTimeImp.h"

#ifndef CIVILIANTIME_H
#define CIVILIANTIME_H

#include "Time.h"

class CivilianTime: public Time {
	public:
		CivilianTime(int, int, int);
};

#endif