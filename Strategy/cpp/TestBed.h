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
		TestBed();						// ctor
		~TestBed();						// dtor
		bool setStrategy(int, int);		// set the strategy
		void doIt();					// invoke stategy function
		
	private:
		Strategy *strategy_;
		enum StrategyType{				// strategies pool
			Dummy, Left, Right, Center
		};
};
#endif