#include "LeftStrategy.h"

// Constructor inherits Strategy
LeftStrategy::LeftStrategy(int width): Strategy(width){}

 /* virtual */
 void LeftStrategy::justify(char *line){
	cout << line << endl;
	line[0] = '\0';
}
