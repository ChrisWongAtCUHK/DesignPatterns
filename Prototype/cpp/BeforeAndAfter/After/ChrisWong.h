#include "Stooge.h"

#ifndef CHRISWONG_H
#define CHRISWONG_H
// image two
class ChrisWong: public Stooge
{
	public:
		ChrisWong();								// constructor
		~ChrisWong();								// destructor
		Stooge* clone();
		void slap_stick();
};
#endif