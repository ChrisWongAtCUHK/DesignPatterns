#include "TimeImp.h"

#ifndef CIVILIANTIMEIMP_H
#define CIVILIANTIMEIMP_H

class CivilianTimeImp: public TimeImp {
	public:
		CivilianTimeImp(int, int , int );

		/* virtual */
		void tell();
		
	protected:
		char whichM_[4];
};

#endif