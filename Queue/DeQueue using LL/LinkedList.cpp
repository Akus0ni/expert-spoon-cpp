#include"LinkedList.h"

template<class T>
LinkedList<T>::LinkedList():head(nullptr),tail(nullptr),count(0)
{

}

template<class T>
bool LinkedList<T>::IsFull()
{
	return false;
}

template<class T>
int LinkedList<T>::Size()
{
	return count;
}

template<class T>
bool LinkedList<T>::IsEmpty()
{
	return (nullptr == head && nullptr == tail);
}
   	
template<class T>
bool LinkedList<T>::AddAtEnd(T data)
{
	bool bSucc = false;
	Node<T>* temp = new Node<T>;
	temp->SetData(data);
	temp->SetNext(nullptr);
	if(IsEmpty())
	{
		head = tail = temp;
		bSucc = true;
	}
	else
	{
		tail->SetNext(temp);
		tail = temp;
		bSucc = true;
	}
	count++;
	return bSucc;
	
}


template<class T>
bool LinkedList<T>::AddAtBegin(T data)
{
	bool bSucc = false;
	Node<T>* temp = new Node<T>;
	temp->SetData(data);
	//temp->SetNext(nullptr);
	if(IsEmpty())
	{
		temp->SetNext(nullptr);
		head = tail = temp;
		bSucc = true;
	}
	else
	{
		temp->SetNext(head);
		head = temp;
		bSucc = true;
	}
	count++;
	return bSucc;
}

template<class T>
void LinkedList<T>::Display() const
{
	Node<T>* temp = head;
	while(temp!=nullptr)
	{
		cout<<temp->GetData()<<"-->";
		temp = temp->GetNext();
	}
	cout<<"NULL"<<endl;
}


template<class T>
bool LinkedList<T>::InsertAt(T data,int pos)
{
	bool bSucc = false;
	int n=0;
	if(count >= pos-1)			//Empty Checked...Length of LL checked
	{
		
		Node<T>* p = head;		//previous node to the pos
		while(n != pos-2)
		{
			p = p->GetNext();
			n++;
		}
		Node<T>* t = new Node<T>;		//create new node
		t->SetData(data);			//set data for new node
		t->SetNext(p->GetNext());		//set next pointer of the node
		p->SetNext(t);				//set previous node's next
		if(p==tail)
		{
			tail = t;	
		}				
		count++;
		bSucc = true;
	}
	return bSucc;
}
   	
template<class T>
T LinkedList<T>::DeleteAtBegin()
{
	T ele;
	if(!IsEmpty())
	{
		Node<T>* t = head;
		ele = t->GetData();
		if(head == tail)
		{
			head = tail = nullptr;
			delete t;
			count--;
		}
		else
		{
			head = head->GetNext();
			//t->SetNext(nullptr);
			delete t;
			count--;
		}
		
	}
	else
	{
		throw runtime_error("Linked List is Empty.");
	}
	return ele;
}
   	
template<class T>
T LinkedList<T>::DeleteAtEnd()
{
	T ele;
	if(!IsEmpty())
	{
		Node<T>* t = new Node<T>;
		//ele = t->GetData();
		if(head == tail)
		{
			head = tail = nullptr;
			delete t;
			count--;
		}
		else
		{
			t = head;
			while(tail != t->GetNext())		//untill t reaches second last element of ll.
			{
				t = t->GetNext();
			}	
			t->SetNext(nullptr);
			ele = tail->GetData();
			
			delete tail;
			count--;
			tail = t;
			
		}
	}
	else
	{
		throw runtime_error("Empty Linked List.");
	}
	return ele;
}


template<class T>
void LinkedList<T>::ReverseLL()
{
	if(!IsEmpty())
	{
		if(head == tail)
		{
			return;
		}
		Node<T>* nHead = tail;
		Node<T>* t = head;
		while(head->GetNext() != nullptr)
		{
			while(t->GetNext() != tail)
			{
				t = t->GetNext();
			}
			t->SetNext(nullptr);
			tail->SetNext(t);
			tail = t;
			t = head;
		}
		head = nHead;
	}
	else
	{
		throw runtime_error("List is Empty.");
	}
}

template<class T>
LinkedList<T>::~LinkedList()
{
	if(!IsEmpty())
	{
		Node<T>* t = head;
		while(t!=nullptr)
		{
			head = head->GetNext();
			delete t;
			t = head;
		}
	}
	count = 0;
}





template class LinkedList<int>;
template class LinkedList<char>;

























