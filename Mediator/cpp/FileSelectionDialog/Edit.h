#include "Widget.h"

#ifndef EDIT_H
#define EDIT_H
class Edit: public Widget
{
	public:
		Edit(FileSelectionDialog*, const char*);
		void queryWidget();
		void updateWidget();
};
#endif
