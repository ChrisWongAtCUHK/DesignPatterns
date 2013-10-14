#include "Widget.h"

Widget::Widget(FileSelectionDialog *mediator, const char *name){
	_mediator = mediator;
	strcpy(_name, name);
}
