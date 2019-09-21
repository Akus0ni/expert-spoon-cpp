#include"Node.h"

template<class T>
Node<T>::Node():next(nullptr)
{}

template<class T>
T Node<T>::GetData()
{
	return data;
}

template<class T>
Node<T>* Node<T>::GetNext()
{
	return next;
}

template<class T>
void Node<T>::SetData(T ele)
{
	data=ele;
}

template<class T>
void Node<T>::SetNext(Node * temp)
{
	next=temp;
}


//template class Node<int>;
//template class Node<char>;
//template class Node<string>;
//template class Node<float>;

