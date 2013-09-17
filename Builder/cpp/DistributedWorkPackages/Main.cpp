#include "Main.h"

// Main program
int main(int argc, char* argv[])
{
	UnixBuilder unixBuilder;
	VmsBuilder vmsBuilder;
	Reader reader;

	reader.setBuilder(&unixBuilder);
	reader.construct(input, NUM_ENTRIES);
	cout << unixBuilder.getResult()->getState() << endl;

	reader.setBuilder(&vmsBuilder);
	reader.construct(input, NUM_ENTRIES);
	cout << vmsBuilder.getResult()->getState() << endl;
	
	return 0;
}