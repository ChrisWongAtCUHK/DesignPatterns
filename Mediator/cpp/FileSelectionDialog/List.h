#include "Widget.h"

#ifndef LIST_H
#define LIST_H
class List: public Widget
{
	public:
		List(FileSelectionDialog*, const char*);
		void queryWidget();	
		void updateWidget();
};
#endif
