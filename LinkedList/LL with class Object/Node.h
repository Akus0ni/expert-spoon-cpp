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
};

#endif
