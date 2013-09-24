#include "Queue.h"

template <typename T> Queue<T>::Queue(){
	m_add = m_remove = 0;
}

template <typename T> void Queue<T>::enque(T *c){
	m_array[m_add] = c;
	m_add = (m_add + 1) % SIZE;
}

template <typename T> T* Queue<T>::deque(){
	int temp = m_remove;
	m_remove = (m_remove + 1) % SIZE;
	return m_array[temp];
}
