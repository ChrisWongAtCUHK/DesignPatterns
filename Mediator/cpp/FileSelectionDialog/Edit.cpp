#include "Edit.h"

Edit::Edit(FileSelectionDialog *dir, const char *name): Widget(dir, name){}
	
void Edit::queryWidget(){
	cout << "   " << _name << " edit queried" << endl;
}
		
void Edit::updateWidget(){
	cout << "   " << _name << " edit updated" << endl;
}
