#include "Stooge.h"								// prototype
#include "Factory.h"							// factory
#include "Amby.h"								// image one
#include "ChrisWong.h"							// image two
#include "Ming.h"								// image three

// Main program
int main(int argc, char *argv[]){
	vector<Stooge*> roles;
	int choice;

	while (true){
		cout << "Amby(1) ChrisWong(2) Ming(3) Go(0): ";
		cin >> choice;
		
		// verify the input is int or not
		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Invalid choice. Must be integer." << endl;
		}
		
		// exit the loop
		if (choice == 0){
		  break;
		}
		roles.push_back(Factory::make_stooge(choice));
	}
	
	for (unsigned int i = 0; i < roles.size(); i++){
		roles[i]->slap_stick();
	}
	for (unsigned int i = 0; i < roles.size(); i++)
		delete roles[i];
		
	return 0;
}