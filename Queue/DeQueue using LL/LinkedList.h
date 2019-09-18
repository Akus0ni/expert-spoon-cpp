#include"Node.h"
#include<iostream>
#include<stdexcept>
using namespace std;

template<class T>
class LinkedList
{
	Node<T>* head;
	Node<T>* tail;
	int count;
   public:
   	LinkedList();
   	bool IsFull();
   	bool IsEmpty();
   	
   	bool AddAtEnd(T data);
   	bool AddAtBegin(T data);
   	bool InsertAt(T data,int pos);
   	
   	T DeleteAtBegin();
   	T DeleteAtEnd();
   	
   	void ReverseLL();
   	
   	void Display() const;
   	
   	int Size();
   	
   	~LinkedList();
};
