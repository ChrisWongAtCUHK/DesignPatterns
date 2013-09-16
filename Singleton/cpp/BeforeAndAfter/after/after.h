#include "GlobalChrisWong.h"


// Allocating and initializing GlobalClass's
// static data member.  The pointer is being
// allocated - not the object inself.
GlobalChrisWong *GlobalChrisWong::s_instance = 0;

void age(void){
	 GlobalChrisWong::instance()->set_age(22);

}

void face(void){
	GlobalChrisWong::instance()->set_face("handsome");

}