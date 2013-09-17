#include "Builder.h"

#ifndef UNIXBUILDER_H
#define UNIXBUILDER_H
class UnixBuilder: public Builder
{
	public:
		UnixBuilder();
		void configureFile(char *);
		void configureQueue(char *);
		void configurePathway(char *);
};
#endif