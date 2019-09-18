#include"Stack.h"
template <class T>
Stack<T>::Stack():size(4)
{
	p = new T[size];
	top1 = -1;
	top2 = 4;
	cout<<"\nCTOR "<<endl;
}

template <class T>
Stack<T>::Stack(int s):size(s)
{
        p = new T[size];
        top1 = -1;
        top2 = size;
        cout<<"\nCTOR "<<endl;
}

template <class T>
bool Stack<T>::IsEmpty(int stackNo)
{
	if(stackNo == 1)
	{
		return ( -1 == top1 );
	}
	return ( size == top2 );
}

template <class T>
bool Stack<T>::IsFull()
{
	return ( (top2-1) == top1);
}

template <class T>
T Stack<T>::peep(int stackNo)
{
	if(IsEmpty(stackNo))
	{
		throw runtime_error("\nStack Underflow!!");
	}
	return (stackNo==1 ? p[top1] : p[top2]);
}


template <class T>
T Stack<T>::pop(int stackNo)
{
	if(IsEmpty(stackNo))
        {
                throw runtime_error("\nStack Underflow!!");
        }
        return (stackNo==1 ? p[top1--] : p[top2++]);
}


template <class T>
void Stack<T>::push(T data,int stackNo)
{
	if(IsFull())
	{
		throw runtime_error("\nStack OverFlow!!");
	}
	(stackNo==1 ? p[++top1] : p[--top2])=data;
}


template <class T>
int Stack<T>::GetSize()
{
	return size;
}


template <class T>
Stack<T>::~Stack()
{
	cout<<"\nStack is Destroyed!"<<endl;
	delete []p;
}

//Explicit Instanciation of templatization of class

template class Stack<int> ;	//Creation of Int Copy
template class Stack<char> ;	//Creation of Char Copy









