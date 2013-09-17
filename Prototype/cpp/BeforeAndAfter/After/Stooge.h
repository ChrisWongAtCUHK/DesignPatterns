#include <iostream>							// std::cout, std::endl
#include <stdio.h>      					// std::setw
#include <vector>							// vector

using namespace std;

#ifndef STOOGE_H
#define STOOGE_H
// Image
class Stooge
{
	public:
		Stooge();							// constructor
		virtual ~Stooge();				// destructor
		static int STR_WIDTH;				// left-align
		static char COLON;					// format character
		virtual Stooge* clone() = 0;
		virtual void slap_stick() = 0;
};
#endif