#include "Widget.h"
#include "WindowsButton.h"
#include "WindowsMenu.h"
#include "Factory.h"

#ifndef WINDOWSFACTORY_H
#define WINDOWSFACTORY_H
// Platform Two
class WindowsFactory : public Factory
{
	public:
		Widget* create_button();		// makeProductOne
		Widget* create_menu();			// makeProductTwo
};
#endif