#include "DistrWorkPackage.h"

#ifndef BUILDER_H
#define BUILDER_H
class Builder
{
	public:
		virtual void configureFile(char*) = 0;
		virtual void configureQueue(char*) = 0;
		virtual void configurePathway(char*) = 0;
		DistrWorkPackage *getResult(){
			return _result;
		}
		
	protected:
		DistrWorkPackage *_result;
};
#endif