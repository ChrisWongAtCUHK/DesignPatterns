#include <fstream>
#include <iostream>
#include <list>
#include <string>

#include "MyList.cpp"

using namespace std;

class Context
{
	private:
		list<string>::iterator tokens;
		string currentToken;
	public:
		// Constructor
		Context(string filename){
			list<string> tokenList;
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
						cout << token <<endl; // Prints out token.
					}
				}

			}
			infile.close();
		}
	
};