#include "State.h"

#ifndef ON_H
#define ON_H
class ON: public State
{
	public:
		ON();
		~ON();
		void off(Machine *);
};
#endif