#include "Strategy.h"

#ifndef CENTERSTRATEGY_H
#define CENTERSTRATEGY_H
// ImplementationThree
class CenterStrategy: public Strategy
{
	public:
		CenterStrategy(int);					// ctor
		~CenterStrategy();                      // virtual dtor
	
	private:
		/* virtual */
		void justify(char *);
};
#endif