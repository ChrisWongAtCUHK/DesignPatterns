#include "Factory.h"
#include "MotifFactory.h"
#include "WindowsFactory.h"

Factory* factory;

void display_window_one() {
	Widget* w[] = {
			factory->create_button(),
			factory->create_menu() };
	w[0]->draw();
	w[1]->draw();
}

void display_window_two() {
	Widget* w[] = { 
			factory->create_menu(),
			factory->create_button() };
	w[0]->draw();
	w[1]->draw();
}