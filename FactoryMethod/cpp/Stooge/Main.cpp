#include "Stooge.h"						// factory
#include "Amby.h"						// product one
#include "ChrisWong.h"					// product two
#include "Ming.h"						// product three

// Main program
int main(int argc, char *argv[]){
	vector<Stooge*> roles;
	enum choices{GO, AMBY, CHRISWONG, MING};
	int choice;

	while (true){
		cout << "Amby(1) ChrisWong(2) Ming(3) Go(0): ";
		cin >> choice;
		
		if(cin.fail()){
			cin.clear();
			cin.ignore();
			cout << "Invalid choice. Must be integer." << endl;
		}
		
		if (choice == GO)
		  break;
		switch(choice){
			case AMBY: 
				roles.push_back(new Amby);
				break;
			case CHRISWONG: 
				roles.push_back(new ChrisWong);
				break;
			case MING: 
				roles.push_back(new Ming);
				break;
			default:
				break;
		}
	}
	
	for (unsigned int i = 0; i < roles.size(); i++)
		roles[i]->slap_stick();
	for (unsigned int i = 0; i < roles.size(); i++)
		delete roles[i];
		
	return 0;
}