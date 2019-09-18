#ifndef STACK_H
#define STACK_H

#include<iostream>
#include<stdexcept>
using namespace std;

template <class T>
class Stack
{
	T *p;
	int size;
	int top1;
	int top2;
	public:
	Stack();
	Stack(int s);
	
	bool IsEmpty(int stackNo);
	bool IsFull(int stackNo);

	T peep(int stackNo);
	T pop(int stackNo);
	void push(T data,int stackNo);

	int GetTop(int stackNo);
	~Stack();
};



#endif






