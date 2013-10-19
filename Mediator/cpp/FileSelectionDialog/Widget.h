#include <iostream>
#include <string.h>

using namespace std;

#ifndef WIDGET_H
#define WIDGET_H
class FileSelectionDialog;

class Widget
{
	public:
		Widget(FileSelectionDialog*, const char*);
		
		virtual void changed();
		virtual void updateWidget() = 0;
		virtual void queryWidget() = 0;
	protected:
		char _name[20];
	private:
		FileSelectionDialog *_mediator;
};
#endif
