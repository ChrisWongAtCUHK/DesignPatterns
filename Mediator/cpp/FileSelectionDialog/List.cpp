#include "List.h"

List::List(FileSelectionDialog *dir, const char *name): Widget(dir, name){}
		
void List::queryWidget(){
	cout << "   " << _name << " list queried" << endl;
}

void List::updateWidget(){
	cout << "   " << _name << " list updated" << endl;
}

