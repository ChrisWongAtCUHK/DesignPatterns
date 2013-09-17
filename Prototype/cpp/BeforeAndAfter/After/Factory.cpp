#include "Factory.h"						// factory

// cloneRegistry
Stooge* Factory::make_stooge(int choice) {
	return s_prototypes[choice]->clone();
}

// images
Stooge* Factory::s_prototypes[] = {
   0, new Amby, new ChrisWong, new Ming
};

