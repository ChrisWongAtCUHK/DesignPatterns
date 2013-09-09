#include "Machine.h"
#include "State.h"
#include "ON.h"




int main(){
	void(Machine:: *ptrs[])() = {
		// http://stackoverflow.com/questions/15756331/function-pointers-generate-invalid-use-of-non-static-member-function-error
		&Machine::off, &Machine::on
	};
	Machine fsm;
	int num;
	while (1){
		cout << "Enter 0/1: ";
		cin >> num;
		if(num != 0 && num != 1){
			break;
		}
		(fsm.*ptrs[num])();
	}
	
	cout << "State Machine ends." << endl;
	return 0;
}