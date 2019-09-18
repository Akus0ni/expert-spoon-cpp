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
	int top;
	public:
	Stack();
	Stack(int s);
	
	bool IsEmpty();
	bool IsFull();

	T peep();
	T pop();
	void push(T data);

	int GetTop();
	~Stack();
};

template <class T>
int Convertbin(Stack<T> &sta,int d);

template <class T>
int Convertoct(Stack<T> &sta,int d);



#endif






