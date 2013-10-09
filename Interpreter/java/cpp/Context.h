#include <fstream>
#include <iostream>
#include <list>
#include <string>

#include "MyList.h"

using namespace std;

#ifndef CONTEXT_H
#define CONTEXT_H

class Context
{
	private:
		list<string> tokenList;
		list<string>::iterator tokens;

	public:
		string currentToken;
	
		// Constructor
		Context(string);
		
		// If tokenList has next token, return it, otherwise return empty string
		string nextToken();
	
		// Skip token
		void skipToken(string);
		
		// Convert currentToken to integer
		int currentNumber();
		
		// Destructor
		~Context();
};
#endif