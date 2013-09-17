#include "Stooge.h"
#include "Amby.h"									// product one
#include "ChrisWong.h"								// product two
#include "Ming.h"									// product three

#ifndef FACTORY_H
#define FACTORY_H
// ImageHandler
class Factory 
{
	public:
		static Stooge* make_stooge(int choice);		// cloneRegistry
	private:
		static Stooge* s_prototypes[4];				// images
};
#endif