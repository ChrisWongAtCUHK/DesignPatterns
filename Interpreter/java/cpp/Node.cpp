#pragma once
#include <iostream>

#include "Context.cpp"
using namespace std;

class Node {

	public:
		// Constructor
		Node(){};									// {} is essential for sub-class...
		
		// TODO: Context, destructor
		virtual void parse(Context context) {}; 
		virtual void execute() {};
		
};