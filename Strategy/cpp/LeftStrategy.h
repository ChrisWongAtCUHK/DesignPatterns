#include "Strategy.h"

#ifndef LEFTSTRATEGY_H
#define LEFTSTRATEGY_H
class LeftStrategy: public Strategy
{
	public:
		LeftStrategy(int);
	
	private:
		 /* virtual */
		 void justify(char* );
};
#endif
