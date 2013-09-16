#include "GlobalChrisWong.h"

// Default initialization
GlobalChrisWong *global_cw = 0;

void age(void){
	// Initialization on first use
	if (!global_cw)
		global_cw = new GlobalChrisWong;
	global_cw->set_age(22);

}

void face(void){
	// Initialization on first use
	if (!global_cw)
		global_cw = new GlobalChrisWong;
	global_cw->set_face("handsome");

}