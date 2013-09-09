#pragma once

#include <iostream>
#include "Machine.h"

using namespace std;

#ifndef STATE_H
#define STATE_H
class State
{
	public:
		virtual void on(Machine *);
		
		virtual void off(Machine *);
};
#endif