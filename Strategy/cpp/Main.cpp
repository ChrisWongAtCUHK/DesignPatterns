#include "Strategy.h"
#include "TestBed.h"
#include "LeftStrategy.h"
#include "RightStrategy.h"
#include "CenterStrategy.h"

// Main program(client)
int main(int argc, char *argv[]){
	TestBed test;
	int answer, width;

	while (true){
		cout << "Exit(0) Left(1) Right(2) Center(3): ";
		cin >> answer;
		if(!answer){
			// exit the loop if input is 0
			break;
		}
		cout << "Width: ";
		cin >> width;
		test.setStrategy(answer, width);
		test.doIt();
	}
	return 0;
}