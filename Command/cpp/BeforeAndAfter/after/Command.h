#include "Titan.h"

#ifndef COMMAND_H
#define COMMAND_H
class Command
{
	public:
		typedef void(Titan:: *Action)();
		Command(Titan*, Action);
		void execute();

	private:
		Titan *m_object;
		Action m_method;
};
#endif
