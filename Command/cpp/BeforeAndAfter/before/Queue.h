#include "Titan.h"

#ifndef QUEUE_H
#define QUEUE_H
// TODO: http://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
template <typename T> class Queue
{
	public:
		Queue();
		void enque(T *c);
		T *deque();
	
	private:
	enum
	{
		SIZE = 8
	};
	T *m_array[SIZE];
	int m_add, m_remove;
};

#endif

#include "Queue.tpp"