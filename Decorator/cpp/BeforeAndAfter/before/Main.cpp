#include "SpecialInfected.h"
#include "Boomer.h"
#include "Jockey.h"
#include "Spitter.h"
#include "BoomerAndJockey.h"
#include "BoomerAndJockeyAndSpitter.h"

// Main program
int main(int argc, char *argv[]) {
	Boomer boomer;
	boomer.si_appear();
	cout << '\n';

	BoomerAndJockey boomer_jockey;
	boomer_jockey.si_appear();
	cout << '\n';

	BoomerAndJockeyAndSpitter boomer_jockey_spitter;
	boomer_jockey_spitter.si_appear();
	cout << '\n';

	return 0;
}