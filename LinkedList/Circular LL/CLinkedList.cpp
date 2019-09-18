#include"CLinkedList.h"

	template<class T>
	CLinkedList<T>::CLinkedList():head(nullptr),tail(nullptr),count(0)
	{
		
	}
	
	template<class T>
	bool CLinkedList<T>::IsEmpty()
	{
		return (head == nullptr && tail == nullptr);
	}
	
	
	template<class T>
	bool CLinkedList<T>::IsFull()
	{
		return false;
	}
	
	
	template<class T>
	bool CLinkedList<T>::AddAtBegin(T ele)
	{
		bool cSucc = false;
		Node<T>* t = new Node<T>;
		t->SetData(ele);
		if(IsEmpty())
		{	
			head = tail = t;
			tail->SetNext(head);
			cSucc = true;
		}
		else
		{
			t->SetNext(head);
			head = t;
			tail->SetNext(head);
			cSucc = true;
		}
		count++;
		return cSucc;
	}
	
	template<class T>
	bool CLinkedList<T>::AddAtEnd(T ele)
	{
		bool cSucc = false;
		Node<T>* t = new Node<T>;
		t->SetData(ele);
		if(IsEmpty())
		{
			head = tail =t;
			tail->SetNext(head);
			cSucc = true;
		}
		else
		{
			tail->SetNext(t);
			tail = t;
			tail->SetNext(head);
			cSucc = true;
		}
		count++;
		return cSucc;
	}
	
	
	template<class T>
	bool CLinkedList<T>::AddAtPos(T ele,int pos)
	{
		bool cSucc = false;
		Node<T>* t = new Node<T>;
		t->SetData(ele);
		if(count>pos-1 && pos!=1)
		{
			Node<T> *p = head;
			int n=0;
			if (n!=pos-2)
			{
				p = p->GetNext();
				n++;
			}
			t->SetNext(p->GetNext());
			p->SetNext(t);
			count++;
			cSucc = true;
		}
		else
		{
			throw runtime_error("List is either Empty or ur adding element at beginning or last (Suggestion: use Add At begin or end)");
		}
		return cSucc;
	}
	
	template<class T>
	T CLinkedList<T>::DeleteAtBegin()
	{
		T ele;
		if(!IsEmpty())
		{
			ele = head->GetData();
			Node<T>* t = head;
			if(head == tail)		//only 1 element
			{
				head = tail = nullptr;
				delete t;
			}
			else
			{
				head = head->GetNext();
				tail->SetNext(head);
				delete t;
			}
			count--;
		}else
		{
			throw runtime_error("Linked List is Empty");
		}
		return ele;
	}
	
	template<class T>
	T CLinkedList<T>::DeleteAtEnd()
	{
		T ele;
		if(!IsEmpty())
		{
			ele = tail->GetData();
			Node<T>* t = head;
			if(tail == head)
			{
				head = tail = nullptr;
				delete t;
			}
			else
			{
				while(t->GetNext() != tail)
				{
					t = t->GetNext();
				}
				tail = t;
				t = t->GetNext();
				tail->SetNext(head);
				delete t;
			}
			count--;
		}else
		{
			throw runtime_error("Linked List is Empty!");
		}
		return ele;
	}
	
	
	
	template<class T>
	void CLinkedList<T>::Display()
	{
		Node<T>* t = head;
		while(t!=tail)
		{
			cout<<t->GetData()<<"--->";
			t = t->GetNext();
		}
		cout<<t->GetData()<<endl;
	}
	
	template<class T>
	int CLinkedList<T>::Size()
	{
		return count;
	}
	
	
	
	
	
	template<class T>
	CLinkedList<T>::~CLinkedList()
	{
		Node<T>* t = head;
		while(head!=tail)
		{
			head = head->GetNext();
			delete t;
			t = head;
		}
		delete t;
	}
	
	template<class T>
	bool CLinkedList<T>::ReverseCLL()
	{
		bool cSucc = false;
		if(head ==  tail)
		{
			throw runtime_error("List is either empty or contains only one element");
		}
		else
		{
			Node<T> *t = nullptr;
			Node<T> *nhead = head;
			head = head->GetNext();
			tail = nhead;
			while(head->GetNext()!=tail)
			{
				t = head;
				head = head->GetNext();
				t->SetNext(nhead);
				nhead = t;
			}
			
			head->SetNext(nhead);
			tail->SetNext(head);
			cSucc = true;
		}
		return cSucc;
	}
	
	template<class T>
	bool CLinkedList<T>::LoopDetector()
	{
		Node<T>* slow = head;
		Node<T>* fast = head->GetNext();
		while(slow != nullptr || fast != nullptr || fast->GetNext() != nullptr)
		{
			if(fast == slow)
			{
				return true;
			}
			slow = slow->GetNext();
			fast = fast->GetNext()->GetNext();
		}
	}
	
	
	
	

	
	
	
	
	
	
	
	
	
	
