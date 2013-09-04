#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

#ifndef TIMEIMP_H
#define TIMEIMP_H

class TimeImp {
	public:
		TimeImp(int, int);
		virtual void tell();
	protected:
		int hr_, min_;
};

#endif