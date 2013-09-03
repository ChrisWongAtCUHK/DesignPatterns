#include "Program.h"

using namespace std;

// Main program
int main(int argc, char *argv[]){
	if(argc < 2){
		cout << "Usage: " << argv[0] << " filename" << endl;
		return 1;
	}
	
	Node *node;
	node = new Program();
	Context context("program.txt");
	node->parse(context);
	node->execute();
	return 0;
}