#include <iostream>
#include <string>

using namespace std;
#ifndef GLOBALCHRISWONG_H
#define GLOBALCHRISWONG_H
// Singleton
class GlobalChrisWong
{
		int age;
		string face;
		static GlobalChrisWong *s_instance;
	public:
		GlobalChrisWong(int v = 30, string str = "fresh");
		
		int get_age();
		void set_age(int v);
		
		string get_face();
		void set_face(string);
		
		// static instance()
		static GlobalChrisWong *instance(){
			if(!s_instance)
				s_instance = new GlobalChrisWong;
			return s_instance;
		}
};
#endif