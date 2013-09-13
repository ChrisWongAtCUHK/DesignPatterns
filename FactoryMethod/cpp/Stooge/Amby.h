#include "Stooge.h"

#ifndef AMBY_H
#define AMBY_H
// Product one
class Amby: public Stooge
{
	public:
		Amby();									// constructor
		~Amby();									// destructor
		void slap_stick();
};
#endif