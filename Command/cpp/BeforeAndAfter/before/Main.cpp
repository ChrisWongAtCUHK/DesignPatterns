#include "Titan.h"
#include "Queue.h"

int main(int argc, char *argv[]){
	Queue<Titan> que;
	Titan input[6], *bad_guy;

	for (int i = 0; i < 6; i++)
		que.enque(&input[i]);

	for (int i = 0; i < 6; i++){
		bad_guy = que.deque();
		if (bad_guy->get_type() == Titan::COLOSSUS )
		  bad_guy->colossus ();
		else if (bad_guy->get_type() == Titan::ARMORED )
		  bad_guy->armored();
		else if (bad_guy->get_type() == Titan::FEMALE)
		  bad_guy->female();
	}
	cout << '\n';

	return 0;
}