#include "TestBed.h"


TestBed::TestBed(){
	strategy_ = NULL;
}

void TestBed::setStrategy(int type, int width){
	delete strategy_;
	if (type == Left)
		strategy_ = new LeftStrategy(width);
	else if (type == Right)
		strategy_ = new RightStrategy(width);
	else if (type == Center)
		strategy_ = new CenterStrategy(width);
}


void TestBed::doIt(){
	strategy_->format();
}