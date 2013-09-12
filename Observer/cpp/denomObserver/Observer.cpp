#include "Observer.h"

// constructor
Observer::Observer(Subject *mod, int div) {
	model = mod;
	denom = div;
	// 4. Observers register themselves with the Subject
	model->attach(this);
}

// destructor
Observer::~Observer(){}

// virtual update
Subject* Observer::getSubject() {
	return model;
}

int Observer::getDivisor() {
	return denom;
}
