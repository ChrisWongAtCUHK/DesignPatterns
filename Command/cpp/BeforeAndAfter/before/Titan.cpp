#include "Titan.h"

Titan::Titan(){
	m_id = s_next++;
	m_type = (Titan::Type)(m_id % 3);
}

Titan::Type Titan::get_type(){
	return m_type;
}
void Titan::colossus (){
	cout << m_id << "-colossus   ";
}
void Titan::armored(){
	cout << m_id << "-armored  ";
}
void Titan::female(){
	cout << m_id << "-female  ";
}