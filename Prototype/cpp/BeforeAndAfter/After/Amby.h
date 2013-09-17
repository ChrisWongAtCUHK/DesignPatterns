#include "Stooge.h"

#ifndef AMBY_H
#define AMBY_H
// image one
class Amby: public Stooge
{
	public:
		Amby();										// constructor
		~Amby();									// destructor
		Stooge* clone();
		void slap_stick();
};
#endif