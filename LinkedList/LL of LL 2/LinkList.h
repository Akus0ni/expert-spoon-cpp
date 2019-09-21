#include"Node.cpp"
//#include"Node.h"

template <class T>
class LinkList
{
	private:
		Node<T>* head;
		Node<T>*tail;
		int count=0;
	public:
		LinkList();	
		bool IsFull();
		bool IsEmpty();
		void Display();
		int Size();
		bool AddAtStart(T ele);
		bool AddAtEnd(T ele);
		bool AddInBetween(int,T);
		T DeleteAtEnd();
		T DeleteInBetween(int position);
		T DeleteAtStart();
		bool Reverse();
		//~LinkList();
		void Display(LinkList<T>);
};


