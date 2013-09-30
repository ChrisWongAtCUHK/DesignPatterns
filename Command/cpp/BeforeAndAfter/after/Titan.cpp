#include "Titan.h"

Titan::Titan(){
	m_id = s_next++;
}

void Titan::colossus(){
	cout << m_id << "-colossus  ";
}

void Titan::armored(){
	cout << m_id << "-armored  ";
}

void Titan::female(){
	cout << m_id << "-female  ";
}

