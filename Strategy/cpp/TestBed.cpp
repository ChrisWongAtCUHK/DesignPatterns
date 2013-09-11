#include "TestBed.h"

// ctor
TestBed::TestBed(){
	strategy_ = NULL;
}

// dtor
TestBed::~TestBed(){
	strategy_ = NULL;
}

// Set the strategy
void TestBed::setStrategy(int type, int width){
	delete strategy_;
	switch(type){
		case Left:
			strategy_ = new LeftStrategy(width);
			break;
		case Right:
			strategy_ = new RightStrategy(width);
			break;
		case Center:
			strategy_ = new CenterStrategy(width);
			break;
		default:
			cout << "Invalid strategy" << endl;
			break;
	}
}

// Invoke strategy function(s)
void TestBed::doIt(){
	strategy_->format();
}