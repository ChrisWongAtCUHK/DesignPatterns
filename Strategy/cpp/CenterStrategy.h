#include "Strategy.h"

#ifndef CENTERSTRATEGY_H
#define CENTERSTRATEGY_H
class CenterStrategy: public Strategy
{
	public:
		CenterStrategy(int);
	
	private:
		 /* virtual */
		 void justify(char *);
};
#endif