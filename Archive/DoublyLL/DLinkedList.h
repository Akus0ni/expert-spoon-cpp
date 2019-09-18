#include"Node.cpp"
#include<string>
template<class T>
class DLinkedList
{
	Node<T>* head;
	Node<T>* tail;
	int count;
public:
	DLinkedList();
	~DLinkedList();

	bool IsEmpty();
	int GetSize();

	void Display();

	bool AddAtBegin(T ele);
	bool AddAtEnd(T ele);
	bool AddInBetween(T ele, int pos);

	T DelFromBegin();
	T DelFromEnd();
	T DelInBetween(int pos);

	void PrintReverseDLL();
	
};