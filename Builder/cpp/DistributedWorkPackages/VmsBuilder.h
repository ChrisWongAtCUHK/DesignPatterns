#include "Builder.h"

#ifndef VMSBUILDER_H
#define VMSBUILDER_H
class VmsBuilder: public Builder
{
	public:
		VmsBuilder();
		void configureFile(char *);
		void configureQueue(char *);
		void configurePathway(char *);
};
#endif