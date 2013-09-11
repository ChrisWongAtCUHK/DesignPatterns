#include "Strategy.h"

#ifndef LEFTSTRATEGY_H
#define LEFTSTRATEGY_H
// ImplementationOne
class LeftStrategy: public Strategy
{
	public:
		LeftStrategy(int);					// ctor
		~LeftStrategy();                    // virtual dtor
	
	private:
		/* virtual */
		void justify(char* );
};
#endif
