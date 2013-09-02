#include <iostream>

#include "Program.cpp"
#include "Context.cpp"

using namespace std;

// Main program
int main(int argc, char *argv[]){
	cout << "Main program start here:" << endl;
	Context context("program.txt");
	return 0;
}