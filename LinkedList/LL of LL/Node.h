#ifndef NODE_H
#define NODE_H

#include<iostream>
using namespace std;
template<class T>
class Node
{
	T data;
	Node<T>* next;
   public:
   	Node();
   	T GetData();
   	Node<T>* GetNext();
   	void SetData(T temp);
   	void SetNext(Node<T>* n);
   	~Node();
   	friend ostream& operator<<(ostream& os ,Node<T>& ll);
};

	template<class T>
   ostream& operator<<(ostream& os ,Node<T>* n)
   {
   		return os<<n->data;
   }

#endif
