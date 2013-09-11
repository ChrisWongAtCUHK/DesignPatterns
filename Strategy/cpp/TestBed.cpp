#include "TestBed.h"

// ctor
TestBed::TestBed(){
	strategy_ = NULL;
}

// dtor
TestBed::~TestBed(){
	strategy_ = NULL;
}

// Set the strategy, true: successful, false: Invalid strategy
bool TestBed::setStrategy(int type, int width){
	delete strategy_;
	switch(type){
		case Left:
			strategy_ = new LeftStrategy(width);
			return true;
		case Right:
			strategy_ = new RightStrategy(width);
			return true;
		case Center:
			strategy_ = new CenterStrategy(width);
			return true;
		default:
			cout << "Invalid strategy." << endl;
			return false;
	}
	return false;
}

// Invoke strategy function(s)
void TestBed::doIt(){
	strategy_->format();
}