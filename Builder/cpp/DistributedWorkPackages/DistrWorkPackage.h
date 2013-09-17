#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

#ifndef DISTRWORKPACKAGE_H
#define DISTRWORKPACKAGE_H
class DistrWorkPackage
{
	public:
		DistrWorkPackage(const char *);
		void setFile(const char *, char *);
		void setQueue(const char *, char *);
		void setPathway(const char *, char *);
		const char *getState();

	private:
		char _desc[200], _temp[80];
};
#endif