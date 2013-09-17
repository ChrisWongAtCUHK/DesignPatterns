#include "DistrWorkPackage.h"
#include "Builder.h"
#include "UnixBuilder.h"
#include "VmsBuilder.h"
#include "Reader.h"

const int NUM_ENTRIES = 6;
PersistenceAttribute input[NUM_ENTRIES] = 
{
	{
		File, "state.dat"
	}
	, 
	{
		File, "config.sys"
	}
	, 
	{
		Queue, "compute"
	}
	, 
	{
		Queue, "log"
	}
	, 
	{
		Pathway, "authentication"
	}
	, 
	{
		Pathway, "error processing"
	}
};