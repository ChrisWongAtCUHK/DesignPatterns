#include "FileSelectionDialog.h"

// Constructor
FileSelectionDialog::FileSelectionDialog(){
	_components[FilterEdit] = new Edit(this, "filter");
	_components[DirList] = new List(this, "dir");
	_components[FileList] = new List(this, "file");
	_components[SelectionEdit] = new Edit(this, "selection");
}

void FileSelectionDialog::handleEvent(int which){
	_components[which]->changed();
}

// virtual
void FileSelectionDialog::widgetChanged(Widget *theChangedWidget){
	if (theChangedWidget == _components[FilterEdit]){
		_components[FilterEdit]->queryWidget();
		_components[DirList]->updateWidget();
		_components[FileList]->updateWidget();
		_components[SelectionEdit]->updateWidget();
	}else if (theChangedWidget == _components[DirList]){
		_components[DirList]->queryWidget();
		_components[FileList]->updateWidget();
		_components[FilterEdit]->updateWidget();
		_components[SelectionEdit]->updateWidget();
	}else if (theChangedWidget == _components[FileList]){
		_components[FileList]->queryWidget();
		_components[SelectionEdit]->updateWidget();
	}else if (theChangedWidget == _components[SelectionEdit]){
		_components[SelectionEdit]->queryWidget();
		cout << "   file opened" << endl;
	}
}

// Destructor
FileSelectionDialog::~FileSelectionDialog(){
	for (int i = 0; i < 3; i++)
		delete _components[i];
}
