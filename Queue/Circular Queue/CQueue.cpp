#include"CQueue.h"
template <class T>
CQueue<T>::CQueue():size(10)
{
	p = new T[size];
	rear = front = 0;
	cout<<"\nCTOR "<<endl;
}

template <class T>
CQueue<T>::CQueue(int s):size(s)
{
        p = new T[size];
        rear =  front = 0;
        cout<<"\nCTOR "<<endl;
}

template <class T>
bool CQueue<T>::IsEmpty()
{
	return ( rear == front );
}

template <class T>
bool CQueue<T>::IsFull()
{
	return ((rear+1)%size == front);
}



template <class T>
T CQueue<T>::DelQ()
{
	if(IsEmpty())
        {
                throw runtime_error("\nStack Underflow!!");
        }
        T ele = p[front];
        front = (front+1)%size;
        return (ele);
}


template <class T>
void CQueue<T>::AddQ(T data)
{
	if(IsFull())
	{
		throw runtime_error("\nStack OverFlow!!");
	}
	p[rear] = data;
        rear = (rear+1)%size;
}


template <class T>
int CQueue<T>::GetSize()
{
	return size;
}


template <class T>
CQueue<T>::~CQueue()
{
	cout<<"\nQueue is Destroyed!"<<endl;
	delete []p;
}

//Explicit Instanciation of templatization of class

template class CQueue<int> ;	//Creation of Int Copy
template class CQueue<char> ;	//Creation of Char Copy









