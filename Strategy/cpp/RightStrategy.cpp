#include "RightStrategy.h"

// Constructor inherits Strategy
RightStrategy::RightStrategy(int width): Strategy(width){}

 /* virtual */
 void RightStrategy::justify(char *line){
	char buf[80];
	int offset = width_ - strlen(line);
	memset(buf, ' ', 80);
	strcpy(&(buf[offset]), line);
	cout << buf << endl;
	line[0] = '\0';
}
