#include "Observer.h"

#ifndef DIVOBSERVER_H
#define DIVOBSERVER_H
// view div
class DivObserver: public Observer
{
	public:
		DivObserver(Subject *, int );
		void update();
};
#endif