#pragma once#include <iostream>#include "Machine.h"using namespace std;class State{	public:		virtual void on(Machine *m);				virtual void off(Machine *m);};