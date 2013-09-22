#include "after.h"

// Main program
int main(int argc, char *argv[]) {
#ifdef MOTIF
	factory = new MotifFactory;
#else // WINDOWS
	factory = new WindowsFactory;
#endif

	Widget* w = factory->create_button();
	w->draw();
	display_window_one();
	display_window_two();
	return 0;
}