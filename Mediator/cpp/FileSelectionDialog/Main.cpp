#include "Widget.h"
#include "List.h"
#include "Edit.h"
#include "FileSelectionDialog.h"

int main(int argc, char *argv[]){
	FileSelectionDialog fileDialog;
	int i;

	cout << "Exit[0], Filter[1], Dir[2], File[3], Selection[4]: ";
	cin >> i;

	while (i){
		fileDialog.handleEvent(i - 1);
		cout << "Exit[0], Filter[1], Dir[2], File[3], Selection[4]: ";
		cin >> i;
	}
	return 0;
}
