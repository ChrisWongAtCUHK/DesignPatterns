#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#ifndef STRATEGY_H
#define STRATEGY_H
// Interface
class Strategy
{
	public:
		Strategy(int);								// ctor
		virtual ~Strategy();						// virtual dtor
		void format();
		
	protected:
		unsigned int width_;
		
	private:
		virtual void justify(char *line) = 0;		// virtual function
};
#endif