#include "Spitter.h"// virtualvoid Spitter::si_appear(){	SpecialInfected::si_appear();	spitter_appear();}// clientvoid Spitter::spitter_appear(){	cout << "Oh great, now they're spitting shit at us!" << endl;}