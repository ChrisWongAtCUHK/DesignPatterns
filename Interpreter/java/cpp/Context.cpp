#include "Context.h"

// Constructor
Context::Context(string filename){
	ifstream infile;
	string line;
	string previousLine = "";
	infile.open(filename.c_str());
	while(!infile.eof()){
		getline(infile, line); // Saves the line
		if (line != previousLine){
			previousLine = line;
			//cout << line <<endl; // Prints out line.
			list<string> strList = split(line, ' ');
			list<string>::iterator it;
			for (it = strList.begin(); it != strList.end(); ++it){
				string token = *it;
				tokenList.push_back(token);
			}
		}

	}
	infile.close();
	tokens = tokenList.begin();
	currentToken = *tokens;
}

// If tokenList has next token, return it, otherwise return empty string
string Context::nextToken(){
	currentToken = "";
	if(tokens == tokenList.end()){
		currentToken = "";
	} else {
		// Conversion the element to string
		++tokens;
		currentToken = *tokens;
	}
	return currentToken;
}

// Skip token
void Context::skipToken(string token){
	if(currentToken.compare(token)){
		// If the token is invalid, display warning message
		cout << "Warning " << token << " is expected, but " + currentToken + " is found." << endl;
	}
	nextToken();
}

// Convert currentToken to integer
int Context::currentNumber(){
	int i;
	sscanf(currentToken.c_str(), "%d", &i);
	return i;
}

// Destructor
Context::~Context() {
	//cout << "I am dieing... " << endl;
}
