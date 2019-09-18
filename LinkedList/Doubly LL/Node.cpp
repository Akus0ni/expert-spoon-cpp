#include"Node.h"
	
	template<class T>
	Node<T>::Node()
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
	Node<T>* Node<T>::GetPrev()
   	{
   		return prev;
   	}
   	
   	template<class T>
	void Node<T>::SetData(T temp)
   	{
   		data = temp;
   	}
   	
   	template<class T>
	void Node<T>::SetNext(Node<T>* n)
	{
		next = n;
	}
   	
   	template<class T>
	void Node<T>::SetPrev(Node<T>* n)
	{
		prev = n;
	}
   	
   	template<class T>
	Node<T>::~Node()
	{}
	
	
template class Node<int>;
template class Node<char>;
 
   	
