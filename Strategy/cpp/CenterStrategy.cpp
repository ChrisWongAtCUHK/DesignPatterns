#include "CenterStrategy.h"

// ctor
CenterStrategy::CenterStrategy(int width): Strategy(width){}

// virtual dtor
CenterStrategy::~CenterStrategy(){}

 /* virtual */
void CenterStrategy::justify(char *line){
	char buf[80];
	int offset = (width_ - strlen(line)) / 2;
	memset(buf, ' ', 80);
	strcpy(&(buf[offset]), line);
	cout << buf << endl;
	line[0] = '\0';
}
