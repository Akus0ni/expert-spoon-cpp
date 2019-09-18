#include"Node.h"

	template<class T>
	Node<T>::Node()/*data(0),next(nullptr),prev(nullptr)*/
	{}
	template<class T>
	Node<T>::~Node()
	{} 

	template<class T>
	void Node<T>::SetData(T ele)
	{
		this->data = ele;
	}
	template<class T>
	T Node<T>::GetData()
	{
		return this->data;
	}

	template<class T>
	void Node<T>::SetNext(Node<T>* nxt)
	{
		this->next = nxt;
	}
	template<class T>
	Node<T>* Node<T>::GetNext()
	{
		return this->next;
	}

	template<class T>
	void Node<T>::SetPrev(Node<T>* pre)
	{
		this->prev = pre;
	}
	template<class T>
	Node<T>* Node<T>::GetPrev()
	{
		return this->prev;
	}








