#include "Widget.h"

// Constructor
Widget::Widget(FileSelectionDialog *mediator, const char *name){
	_mediator = mediator;
	strcpy(_name, name);
}

void Widget::changed()
{
	_mediator->widgetChanged(this);
}
