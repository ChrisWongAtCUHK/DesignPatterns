#include "before.h"

// Main program
int main(int argc, char *argv[]) {
#ifdef MOTIF
	Widget* w = new MotifButton;
#else // WINDOWS
	Widget* w = new WindowsButton;
#endif
	w->draw();
	display_window_one();
	display_window_two();
	return 0;
}