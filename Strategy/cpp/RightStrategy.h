#include "Strategy.h"

#ifndef RIGHTSTRATEGY_H
#define RIGHTSTRATEGY_H
class RightStrategy: public Strategy
{
	public:
		RightStrategy(int);
	
	private:
		/* virtual */
		void justify(char *);
};
#endif