#include"Node.cpp"
#include<stdexcept>

template<class T>
class CLinkedList
{
	Node<T>* head;
	Node<T>* tail;
	int count;
	
	public:
	CLinkedList();
	bool IsEmpty();
	bool IsFull();
	bool AddAtBegin(T ele);
	bool AddAtEnd(T ele);
	bool AddAtPos(T ele,int pos);
	T DeleteAtBegin();
	T DeleteAtEnd();
	
	void Display();
	int Size();
	bool ReverseCLL();
	bool LoopDetector();
	~CLinkedList();
	
};
