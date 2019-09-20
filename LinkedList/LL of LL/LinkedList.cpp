#include"LinkedList.h"
#include<typeinfo>

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
			cout<<temp<<"-->";
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
		Node<T>* t = head;
		if(head == tail)
		{
			head = tail = nullptr;
			ele = t->GetData();
			delete t;
			count--;
		}
		else
		{
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
T LinkedList<T>::DelInBetween(int pos)
{
	if(count>pos-1 && pos != 1)
	{
		T ele;
		Node<T>* p = head;
		Node<T>* t = head->GetNext();
		int n = 0;
		while(n != pos-2)
		{
			p = p->GetNext();
			t = t->GetNext();
			n++;
		}
		p->SetNext(t->GetNext());
		ele = t->GetData();
		delete t;
		count--;
		return ele;
	}
	else
	{
		throw runtime_error("List is either empty or you are deleting first/last element(Suggestion: Choose Delete from Beginning/Ending)");
	}
	
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
	cout<<"Deleted";
	count = 0;
}


template<class T>
void LinkedList<T>::Merge(LinkedList<T> &l2)
{
	if(!IsEmpty() && !l2.IsEmpty())
	{
		//Node<T>* p = this->head;
		//Node<T>* q = l2.head;
		Node<T>* nHead = nullptr;
		Node<T>* nTail = nullptr;
		
		if(head->GetData() < l2.head->GetData())
		{
			nHead = head;
			nTail = head;
			this->head = this->head->GetNext();
			//p = this->head;
		}
		else{
			nHead = l2.head;
			nTail = l2.head;
			l2.head = l2.head->GetNext();
		}
		
		while(this->head != nullptr && l2.head != nullptr)
		{
			if(head->GetData() < l2.head->GetData())
			{
				nTail->SetNext(head);
				nTail = head;
				this->head = this->head->GetNext();
			}
			else{
				nTail->SetNext(l2.head);
				nTail = l2.head;
				l2.head = l2.head->GetNext();
			}
		
		}
		if(head == nullptr)
		{
			nTail->SetNext(l2.head);
			tail = l2.tail;
		}
		else{
			nTail->SetNext(head);
		}
		head = nHead;
	}
}









template<class T>
void LinkedList<T>::Sorting()
{
	if(count>=2)
	{
		T ele;
		Node<T>* p = head;
		Node<T>* q = head->GetNext();
		while(p != nullptr)
		{
			while(q != nullptr)
			{
				if(p->GetData() > q->GetData())
				{
					ele = q->GetData();
					q->SetData(p->GetData());
					p->SetData(ele);
					q = q->GetNext();
				}
				else{
					q = q->GetNext();
				}
			}
			p = p->GetNext();
			if(p!=nullptr)
				q = p->GetNext();
		}
	}
	
}





template<class T>
void LinkedList<T>::AddInsert()
{
	if(count>=2)
	{
		if(typeid(T) == typeid(int))
		{
			Node<T>* p = head;
			Node<T>* q = head->GetNext();
			
			while(q!= nullptr)
			{
				Node<T>* t = new Node<T>;
				T res;
				res = p->GetData() + q->GetData();
				t->SetData(res);
				t->SetNext(q->GetNext());
				q->SetNext(t);
				count++;
				if(t->GetNext() == nullptr)
				{
					tail = t;
					return;
				}
				p = p->GetNext()->GetNext()->GetNext();
				q = q->GetNext()->GetNext()->GetNext();
			}
		}
	}
}





















/*
template<class T>
Node<T>* LinkedList<T>::SortedMerge(Node<T>* h1,Node<T>* h2)
{
	if(h1==nullptr)	return h2;
	else if(h2 == nullptr)	return h1;
	
	if(h1->data);
}

template<class T>
bool LinkedList<T>::MergeSort(LinkedList<T> &ll2)
{
	if(this->head == nullptr || this->head == this->tail || ll2.head == nullptr || ll2.head == ll2.tail)	return false;
	
	bool res = false;
	this->head = SortedMerge(this->head, ll2.head);
	res = true;
	return res;
}*/




























