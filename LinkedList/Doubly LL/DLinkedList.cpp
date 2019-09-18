#include"DLinkedList.h"

	template<class T>
   	DLinkedList<T>::DLinkedList():head(nullptr),tail(nullptr),count(0)
   	{
   	}
   	
   	
   	template<class T>
   	bool DLinkedList<T>::IsFull()
   	{
   		return false;
   	}
   	
   	
   	template<class T>
   	bool DLinkedList<T>::IsEmpty()
   	{
   		return (head == nullptr && tail == nullptr);
   	}
   	
   	template<class T>
   	bool DLinkedList<T>::AddAtEnd(T data)
   	{
   		bool dSucc = false;
   		Node<T>* t = new Node<T>;
   		t->SetData(data);
   		if(IsEmpty())
   		{
   			head = tail =t;
   			t->SetNext(nullptr);
   			t->SetPrev(nullptr);
   			dSucc = true;
   			count++;
   		}
   		else
   		{
   			t->SetPrev(tail);
   			t->SetNext(nullptr);
   			tail->SetNext(t);
   			tail =t;
   			dSucc = true;
   			count++;
   		}
   		return dSucc;
   	}
   	
   	template<class T>
   	bool DLinkedList<T>::AddAtBegin(T data)
   	{
   		bool dSucc = false;
   		Node<T>* t = new Node<T>;
   		t->SetData(data);
   		if(IsEmpty())
   		{
   			head = tail =t;
   			t->SetNext(nullptr);
   			t->SetPrev(nullptr);
   			dSucc = true;
   			count++;
   		}
   		else
   		{
   			t->SetNext(head);
   			t->SetPrev(nullptr);
   			head->SetPrev(t);
   			head = t;
   			dSucc = true;
   			count++;
   		}
   		return dSucc;
   	}
   	
   	template<class T>
   	bool DLinkedList<T>::InsertAt(T data,int pos)
   	{
   		bool dSucc = false;
   		Node<T>* t = new Node<T>;
   		t->SetData(data);
   		if(count>=pos-1)
   		{
   			Node<T> *p = head;
   			int n=0;
   			while(n!=pos-2)
   			{
   				p = p->GetNext();
   				n++;
   			}
   			t->SetPrev(p);
   			t->SetNext(p->GetNext());
   			(p->GetNext())->SetPrev(t);
   			p->SetNext(t);
   			count++;
   			dSucc = true;
   		}
   		else
   		{
   			throw runtime_error("List is either Empty or ur adding element at beginning or last (Suggestion: use Add At begin or end)");
   		}
   		return dSucc;
   	}
   	
   	template<class T>
   	T DLinkedList<T>::DeleteAtBegin()
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
   				return ele;
   			}
   			head = head->GetNext();
   			head->SetPrev(nullptr);
   			delete t;
   			count--;
   			return ele;           
   			
   		}
   		else{
   			throw runtime_error("List is empty!");
   		}			
   	}
   	
   	template<class T>
   	T DLinkedList<T>::DeleteAtEnd()
   	{
   		T ele;
   		if(!IsEmpty())
   		{
   			Node<T>* t = tail;
   			ele = t->GetData();
   			if(head == tail)
   			{
   				head = tail = nullptr;
   				delete t;
   				count--;
   				return ele;
   			}
   			tail=tail->GetPrev();
   			tail->SetNext(nullptr);
   			delete t;
   			count--;
   			return ele;           
   		}
   		else{
   			throw runtime_error("List is empty!");
   		}			
   	}
   	
   	
   	template<class T>
   	void DLinkedList<T>::PrintReverseDLL()
   	{
   		Node<T> *t = tail;
   		while(t!=nullptr)
   		{
   			cout<<t->GetData()<<"--->";
   			t = t->GetPrev();
   		}
   		cout<<"NULL"<<endl;
   	}
   	
   	template<class T>
   	void DLinkedList<T>::Display() //const
   	{
   		Node<T>* t = head;
		do{
			cout<<t->GetData()<<"--->";
			t = t->GetNext();
		}while(t != tail);
		cout<<t->GetData()<<"--->"<<"NULL"<<endl;
   	}
   	
   	template<class T>
   	int DLinkedList<T>::Size()
   	{
   		return count;
   	}
   	
   	template<class T>
   	DLinkedList<T>::~DLinkedList()
   	{
   		Node<T>* t = head;
		while(t!=tail)
		{
			head = head->GetNext();
			delete t;
			t = head;
		}
		delete t;
   	}
   	
template class DLinkedList<int>;
template class DLinkedList<char>;
   	
   	
   	
   	
   	
   	
   	
   	
   	
