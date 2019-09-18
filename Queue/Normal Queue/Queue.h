#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
#include<stdexcept>
using namespace std;

template <class T>
class Queue
{
	T *p;
	int size;
	int rear;
	int front;
	public:
	Queue();
	Queue(int s);
	
	bool IsEmpty();
	bool IsFull();

	T DelQ();
	void AddQ(T data);

	int GetSize();
	~Queue();
};




#endif

