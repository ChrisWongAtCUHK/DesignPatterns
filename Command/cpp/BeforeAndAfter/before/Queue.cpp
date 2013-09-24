#include "Queue.h"

Queue::Queue(){
	m_add = m_remove = 0;
}
void Queue::enque(T *c){
	m_array[m_add] = c;
	m_add = (m_add + 1) % SIZE;
}

T* Queue::deque(){
	int temp = m_remove;
	m_remove = (m_remove + 1) % SIZE;
	return m_array[temp];
}