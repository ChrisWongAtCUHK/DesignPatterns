#pragma once
#include <iostream>

using namespace std;

#ifndef MACHINE_H
#define MACHINE_H
class Machine
{
	class State *current;
	public:
		Machine();
		void setCurrent(State *);
		void on();
		void off();
};
#endif