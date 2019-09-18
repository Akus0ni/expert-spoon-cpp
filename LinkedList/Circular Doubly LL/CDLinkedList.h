#include"Node.h"

template<class T>
class CDLinkedList
{
	Node<T>* head;
	Node<T>* tail;
	int count;
	
	public:
	CDLinkedList();
	~CDLinkedList();
	
	bool IsEmpty();
	
	int Size();
	
	bool AddAtBegin(T ele);
	bool AddAtEnd(T ele);
	
	T DelAtBegin();
	T DelAtEnd();
	bool InsertAtPos(T ele, int pos);
	bool ReverseCDLL();
	
	void Display();
};
