#include "Widget.h"
#include "MotifButton.h"
#include "MotifMenu.h"
#include "Factory.h"

// Platform One
class MotifFactory : public Factory
{
	public:
		Widget* create_button();		// makeProductOne
		Widget* create_menu();			// makeProductTwo
};