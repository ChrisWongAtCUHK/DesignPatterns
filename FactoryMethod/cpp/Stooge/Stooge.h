#include <iostream>							// std::cout, std::endl
#include <iomanip>      					// std::setw
#include <stdio.h>      					// std::setw
#include <vector>							// vector

using namespace std;

#ifndef STOOGE_H
#define STOOGE_H
// Factory
class Stooge
{
	public:
		static int STR_WIDTH;				// left-align
		static char COLON;					// format character
		Stooge();							// constructor
		virtual ~Stooge();					// destructor
		virtual void slap_stick() = 0;
};
#endif