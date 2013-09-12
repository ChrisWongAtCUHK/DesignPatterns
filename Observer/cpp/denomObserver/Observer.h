#pragma once

#include "Subject.h"

#ifndef OBSERVER_H
#define OBSERVER_H
class Subject;						// TODO: without this, Observer.h:12:2: error: 'Subject' does not name a type

class Observer
{
	// 2. "dependent" functionality
	Subject *model;
	int denom;
	public:
		Observer(Subject *, int);		// constructor
		~Observer();					// destructor
		virtual void update() = 0;		// virtual update
		
	protected:
		Subject *getSubject();
		int getDivisor();
};
#endif