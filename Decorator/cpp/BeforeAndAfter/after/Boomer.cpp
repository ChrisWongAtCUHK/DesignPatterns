#include "Boomer.h"// constructorBoomer::Boomer(ISpecialInfected *core): DSpecialInfected(core){}// destructorBoomer::~Boomer(){	cout << "Boomer death" << "   ";}// virtualvoid Boomer::si_appear(){	DSpecialInfected::si_appear();	cout << "Boomer, don't let it puke on you." << endl;}