#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

list<string> split(string, char);					// Split a string to a list of string by delimiter
int sum_of_string(string, char);					// Sum up a string provided that it is a few integers separated by delimiter

// Split a string to a list of string by delimiter
list<string> split(string str, char delim){
	// Declare variables 
	list<string> tokens;
	int i = 0;
	int j = 0;
	char token[20];
	memset(token, 0, 20);
	while(true){

		if(str[i] == delim){
			// Encount the delimiter
			if(j == 0){
				// Skip the delimiter if the token is empty
				i++;
				memset(token, 0, 20);
				continue;
			}
			tokens.push_back(token);		// Push the token to the list
			
			// Reset the string to empty
			j = 0;
			memset(token, 0, 20);
			
		} else if(str[i] == 0){
			if(j == 0){
				// Skip the delimiter if the token is empty
				memset(token, 0, 20);
				break;
			}
			// Encount the end of string
			tokens.push_back(token);		// Push the token to the list
			// Reset the string to empty
			j = 0;
			memset(token, 0, 20);
			break;
		} else {
			token[j] = str[i];
			j++;
		}
		i++;
	}

	return tokens;
}

// Sum up a string provided that it is a few integers separated by delimiter
int sum_of_string(string str, char delim){
	list<string> numList = split(str, ' ');
	list<string>::iterator it;
	int sum_of_str = 0;
	for (it = numList.begin(); it != numList.end(); ++it){
		string tmp = *it;
		int i;
		sscanf(tmp.c_str(), "%d", &i);
		sum_of_str += i;
	}
	return sum_of_str;
}