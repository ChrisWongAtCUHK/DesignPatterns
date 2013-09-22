#include "SpecialInfected.h"
#include "Boomer.h"
#include "Jockey.h"

// Main program
int main(int argc, char *argv[]) {
	Boomer boomer;
	boomer.si_appear();
	cout << '\n';

	Jockey jockey;
	jockey.si_appear();
	cout << '\n';

	cout << '\n';

	return 0;
}