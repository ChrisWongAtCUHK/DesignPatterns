#include "Stooge.h"

#ifndef MING_H
#define MING_H
// image three
class Ming: public Stooge
{
	public:
		Ming();									// constructor
		~Ming();								// destructor
		Stooge* clone();
		void slap_stick();
};
#endif