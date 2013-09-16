#include <iostream>
#include <string>

using namespace std;
#ifndef GLOBALCHRISWONG_H
#define GLOBALCHRISWONG_H
class GlobalChrisWong
{
		int age;
		string face;
	public:
		GlobalChrisWong(int v = 30, string str = "fresh");
		
		int get_age();
		void set_age(int v);
		
		string get_face();
		void set_face(string);
};
#endif