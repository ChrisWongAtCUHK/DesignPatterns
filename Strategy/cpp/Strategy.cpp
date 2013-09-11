#include "Strategy.h"
		
// Constructor
Strategy::Strategy(int width): width_(width){}

// Read file input and do formatting
void Strategy::format(){
	char line[80], word[30];
	ifstream inFile("quote.txt", ios::in);				// read file input
	line[0] = '\0';

	inFile >> word;
	strcat(line, word);
	while (inFile >> word){								// read file content
		if (strlen(line) + strlen(word) + 1 > width_)
		  justify(line);								// invoke virtual function
		else
		  strcat(line, " ");
		strcat(line, word);
	}
	justify(line);										// invoke virtual function
}
		
