#include "State.h"

#ifndef OFF_H
#define OFF_H
class OFF: public State
{
	public:
		OFF();
		~OFF();
		void on(Machine *);
};
#endif