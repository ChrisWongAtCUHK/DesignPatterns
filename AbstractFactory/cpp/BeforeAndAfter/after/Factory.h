#include "Widget.h"

#ifndef FACTORY_H
#define FACTORY_H
// AbstractPlatform
class Factory 
{
	public:
		virtual Widget* create_button() = 0;			// AbstractProductOne
		virtual Widget* create_menu() = 0;				// AbstractProductTwo
};
#endif