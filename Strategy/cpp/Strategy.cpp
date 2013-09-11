#include "Strategy.h"
		
// ctor
Strategy::Strategy(int width): width_(width){}

// virtual dtor
Strategy::~Strategy(){}

// Read file input and do formatting
void Strategy::format(){
	char line[80], word[30];
	ifstream inFile("quote.txt", ios::in);					// read file input
	line[0] = '\0';											// set the line to empty string

	
	while (true){											// read file content
		
		inFile >> word;
		if(!inFile){										// no more content in the file, exit loop
			break;
		}
		strcat(line, word);
		if (strlen(line) + strlen(word) + 1 > width_)
		  justify(line);									// invoke virtual function
		else
		  strcat(line, " ");
	}
	justify(line);											// invoke virtual function
}
		
