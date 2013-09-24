#include <iostream>

using namespace std;

#ifndef TITAN_H
#define TITAN_H
class Titan
{
	public:
		enum Type
		{
			COLOSSUS , ARMORED , FEMALE
		};
		Titan();
		Type get_type();
		void colossus();
		void armored();
		void female();
	
	private:
		Type m_type;
		int m_id;
		static int s_next;
};
#endif