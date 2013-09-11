#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#ifndef STRATEGY_H
#define STRATEGY_H
class Strategy
{
	public:
		// Constructor
		Strategy(int);
		void format();
		
	protected:
		unsigned int width_;
		
	private:
		virtual void justify(char *line) = 0;
};
#endif