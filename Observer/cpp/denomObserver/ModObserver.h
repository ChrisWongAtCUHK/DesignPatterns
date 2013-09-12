#include "Observer.h"

#ifndef MODOBSERVER_H
#define MODOBSERVER_H
// view mod
class ModObserver: public Observer
{
	public:
		ModObserver(Subject *mod, int div): Observer(mod, div){}
		void update();
};
#endif