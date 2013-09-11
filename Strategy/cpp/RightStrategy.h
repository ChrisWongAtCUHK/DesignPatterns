#include "Strategy.h"

#ifndef RIGHTSTRATEGY_H
#define RIGHTSTRATEGY_H
// ImplementationTwo
class RightStrategy: public Strategy
{
	public:
		RightStrategy(int);						// ctor
		~RightStrategy();                       // virtual dtor

	private:
		/* virtual */
		void justify(char *);
};
#endif