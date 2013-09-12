#include <iostream>
#include <vector>

#include "Observer.h"

using namespace std;
#ifndef SUBJECT_H
#define SUBJECT_H
class Subject 
{
	// 1. "independent" functionality
	vector <class Observer *> views; // 3. Coupled only to "interface"
	int value;
	public:
		Subject();					// constructor
		~Subject();					// destructor
		void attach(Observer *);	// attach
		void setVal(int);			// set state
		int getVal();				// get state
		void notify();				// broadcast
};
#endif