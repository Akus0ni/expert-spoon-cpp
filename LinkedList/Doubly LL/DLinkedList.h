#include"Node.h"
#include<iostream>
#include<stdexcept>
using namespace std;

template<class T>
class DLinkedList
{
	Node<T>* head;
	Node<T>* tail;
	int count;
   public:
   	DLinkedList();
   	bool IsFull();
   	bool IsEmpty();
   	int Size();
   	
   	bool AddAtEnd(T data);
   	bool AddAtBegin(T data);
   	bool InsertAt(T data,int pos);
   	
   	T DeleteAtBegin();
   	T DeleteAtEnd();
   	
   	void PrintReverseDLL();
   	
   	void Display() ;
   	
   	~DLinkedList();
};
