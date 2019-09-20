#include"Node.cpp"
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
   	T DelInBetween(int pos);
   	
   	void ReverseLL();
   	
   	void Display() const;
   	
   	void Sorting();
   	void Merge(LinkedList<T> &l2);
   	
   	void AddInsert();
   	
   	//void MergeSort(LinkedList<T>* ll2);
   	
   	//bool SortedMerge(Node<T>* h1,Node<T>* h2);
   	
   	~LinkedList();

     // friend istream& operator>>(istream& is ,LinkedList<T>& ll);
      //friend ostream& operator<<(ostream& os ,LinkedList<T>& ll);

};

   /*template<class T>
   ostream& operator<<(ostream& os ,LinkedList<T>& ll)
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









