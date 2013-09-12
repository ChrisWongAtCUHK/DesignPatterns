#include "Subject.h"

Subject::Subject(){}						// constructor
Subject::~Subject(){}						// destructor


// attach
void Subject::attach(Observer *obs) {
	views.push_back(obs);
}

// set state
void Subject::setVal(int val) {
	value = val;
	notify();
}

// get state
int Subject::getVal() {
	return value;
}

// broadcast
void Subject::notify(){
	// 5. Publisher broadcasts
	for (unsigned int i = 0; i < views.size(); i++){
		views[i]->update();
	}
}