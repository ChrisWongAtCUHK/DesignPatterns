#include "Stooge.h"

#ifndef MING_H
#define MING_H
// Product three
class Ming: public Stooge
{
	public:
		Ming();									// constructor
		~Ming();									// destructor
		void slap_stick();
};
#endif