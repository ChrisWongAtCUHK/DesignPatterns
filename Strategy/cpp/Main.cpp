#include "Strategy.h"
#include "TestBed.h"
#include "LeftStrategy.h"
#include "RightStrategy.h"
#include "CenterStrategy.h"

// Main program
int main(int argc, char *argv[]){
	TestBed test;
	int answer, width;
	cout << "Exit(0) Left(1) Right(2) Center(3): ";
	cin >> answer;
	while (answer){
		cout << "Width: ";
		cin >> width;
		test.setStrategy(answer, width);
		test.doIt();
		cout << "Exit(0) Left(1) Right(2) Center(3): ";
		cin >> answer;
	}
	return 0;
}