#include"Queue.h"
template <class T>
Queue<T>::Queue():size(10)
{
	p = new T[size];
	rear = front = 0;
	cout<<"\nCTOR "<<endl;
}

template <class T>
Queue<T>::Queue(int s):size(s)
{
        p = new T[size];
        rear =  front = 0;
        cout<<"\nCTOR "<<endl;
}

template <class T>
bool Queue<T>::IsEmpty()
{
	return ( rear == front );
}

template <class T>
bool Queue<T>::IsFull()
{
	return (rear == (size));
}



template <class T>
T Queue<T>::DelQ()
{
	if(IsEmpty())
        {
                throw runtime_error("\nStack Underflow!!");
        }
        return (p[front++]);
}


template <class T>
void Queue<T>::AddQ(T data)
{
	if(IsFull())
	{
		throw runtime_error("\nStack OverFlow!!");
	}
	p[rear++]=data;
}


template <class T>
int Queue<T>::GetSize()
{
	return size;
}


template <class T>
Queue<T>::~Queue()
{
	cout<<"\nQueue is Destroyed!"<<endl;
	delete []p;
}

//Explicit Instanciation of templatization of class

template class Queue<int> ;	//Creation of Int Copy
template class Queue<char> ;	//Creation of Char Copy









