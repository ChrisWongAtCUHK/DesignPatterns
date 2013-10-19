#include "Edit.h"
#include "List.h"

#ifndef FILESELECTIONDIALOG_H
#define FILESELECTIONDIALOG_H
class FileSelectionDialog
{
	public:
		enum Widgets
		{
			FilterEdit, DirList, FileList, SelectionEdit
		};
		FileSelectionDialog();
		virtual ~FileSelectionDialog();
		void handleEvent(int);
		virtual void widgetChanged(Widget *);
	
	private:
		Widget *_components[4];
};
#endif
