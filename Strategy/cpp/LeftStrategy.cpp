#include "LeftStrategy.h"

// ctor
LeftStrategy::LeftStrategy(int width): Strategy(width){}

// virtual dtor
LeftStrategy::~LeftStrategy(){}

 /* virtual */
 void LeftStrategy::justify(char *line){
	cout << line << endl;					// print out the line
	line[0] = '\0';							// set the line to empty string
}
