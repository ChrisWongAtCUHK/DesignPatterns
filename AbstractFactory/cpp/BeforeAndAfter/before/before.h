#include "Widget.h"
#include "MotifButton.h"
#include "MotifMenu.h"
#include "WindowsButton.h"
#include "WindowsMenu.h"

void display_window_one() {
#ifdef MOTIF
	Widget* w[] = { 
			new MotifButton,
			new MotifMenu };
#else // WINDOWS
	Widget* w[] = { 
			new WindowsButton,
			new WindowsMenu };
#endif
	w[0]->draw();
	w[1]->draw();
}

void display_window_two() {
#ifdef MOTIF
	Widget* w[] = { 
			new MotifMenu,
			new MotifButton };
#else // WINDOWS
	Widget* w[] = { 
			new WindowsMenu,
			new WindowsButton };
#endif
	w[0]->draw();
	w[1]->draw();
}