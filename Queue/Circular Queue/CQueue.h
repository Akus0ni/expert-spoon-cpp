#ifndef CQUEUE_H
#define CQUEUE_H

#include<iostream>
#include<stdexcept>
using namespace std;

template <class T>
class CQueue
{
	T *p;
	int size;
	int rear;
	int front;
	public:
	CQueue();
	CQueue(int s);
	
	bool IsEmpty();
	bool IsFull();

	T DelQ();
	void AddQ(T data);

	int GetSize();
	~CQueue();
};




#endif

