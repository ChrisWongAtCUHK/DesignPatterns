#include "Stooge.h"						// factory
#include "Amby.h"						// product one
#include "ChrisWong.h"					// product two
#include "Ming.h"						// product three

// Main program
int main(int argc, char *argv[]){
	vector<Stooge*> roles;
	int choice;

	while (true){
		cout << "Amby(1) ChrisWong(2) Ming(3) Go(0): ";
		cin >> choice;
		if (choice == 0)
		  break;
		else if (choice == 1)
		  roles.push_back(new Amby);
		else if (choice == 2)
		  roles.push_back(new ChrisWong);
		else
		  roles.push_back(new Ming);
	}
	
	for (unsigned int i = 0; i < roles.size(); i++)
		roles[i]->slap_stick();
	for (unsigned int i = 0; i < roles.size(); i++)
		delete roles[i];
		
	return 0;
}