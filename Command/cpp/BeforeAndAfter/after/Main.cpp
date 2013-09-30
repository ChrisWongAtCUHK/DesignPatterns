#include "Titan.h"
#include "Command.h"
#include "Queue.hpp"

int Titan::s_next = 0;

int main(int argc, char *argv[]){
	Queue<Command*> que;
	Command *input[] = 
	{
		new Command(new Titan, &Titan::colossus), new Command(new Titan, &Titan::armored),
		new Command(new Titan, &Titan::female), new Command(new Titan, &Titan
				::colossus), new Command(new Titan, &Titan::armored), new Command(new Titan,
					&Titan::female)
	};

	for (int i = 0; i < 6; i++)
		que.enque(input[i]);

	for (int i = 0; i < 6; i++)
		que.deque()->execute();
	
	cout << '\n';
	return 0;
}
