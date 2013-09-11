#include "Strategy.h"
#include "LeftStrategy.h"
#include "RightStrategy.h"
#include "CenterStrategy.h"

#ifndef TESTBED_H
#define TESTBED_H
// Context
class TestBed
{
	public:
		enum StrategyType{				// strategies pool
			Dummy, Left, Right, Center
		};
		TestBed();						// ctor
		~TestBed();						// dtor
		void setStrategy(int, int);		// set the strategy
		void doIt();					// invoke stategy function
		
	private:
		Strategy *strategy_;
};
#endif