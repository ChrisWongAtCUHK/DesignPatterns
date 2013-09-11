#include "Strategy.h"
#include "LeftStrategy.h"
#include "RightStrategy.h"
#include "CenterStrategy.h"

#ifndef TESTBED_H
#define TESTBED_H
class TestBed
{
	public:
		enum StrategyType{
			Dummy, Left, Right, Center
		};
		TestBed();
		void setStrategy(int, int);
		void doIt();
		
	private:
		Strategy *strategy_;
};
#endif