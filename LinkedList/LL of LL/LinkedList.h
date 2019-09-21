#include"Node.cpp"
#include<iostream>
#include<stdexcept>
#include<typeinfo>
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
   	T DelInBetween(int pos);
   	
   	void ReverseLL();
   	
   	void Display() const;
   	
   	
   	
   	~LinkedList();

   	template<class A>
	friend ostream& operator<<(ostream& os ,const LinkedList<A>& ll)
	{
		Node<T>* temp = ll.head;
		while(temp!=nullptr)
		{
		   os<<temp->GetData()<<"-->";
		   temp = temp->GetNext();
		}
		cout<<"NULL"<<endl;
		return os;
	}

};

   /*template<class T>
   ostream& operator<<(ostream& os ,const LinkedList<T>& ll)
   {
      Node<T>* temp = ll.head;
      while(temp!=nullptr)
      {
            os<<temp->GetData()<<"-->";
            temp = temp->GetNext();
      }
      cout<<"NULL"<<endl;
      return os;
   }*/









