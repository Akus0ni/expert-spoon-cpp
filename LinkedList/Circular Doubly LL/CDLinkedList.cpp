#include"CDLinkedList.h"

	template<class T>
	CDLinkedList<T>::CDLinkedList():head(nullptr),tail(nullptr),count(0)
	{}
	
	template<class T>
	CDLinkedList<T>::~CDLinkedList()
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
	
	template<class T>
	bool CDLinkedList<T>::IsEmpty()
	{
		return(head == nullptr && tail == nullptr);
	}
	
	template<class T>
	int CDLinkedList<T>::Size()
	{
		return count;
	}
	
	template<class T>
	bool CDLinkedList<T>::AddAtBegin(T ele)
	{
		bool cdSucc = false;
		Node<T>* t = new Node<T>;
		t->SetData(ele);
		if(IsEmpty())
		{
			head =tail = t;
			t->SetNext(tail);
			t->SetPrev(head);
			cdSucc = true;
			count++;
		}
		else
		{
			t->SetNext(head);
			t->SetPrev(head->GetPrev());
			head->SetPrev(t);
			head = t;
			tail->SetNext(head);
			cdSucc = true;
			count++;
		}
		return cdSucc;
	}
	
	template<class T>
	bool CDLinkedList<T>::AddAtEnd(T ele)
	{
		bool cdSucc = false;
		Node<T>* t = new Node<T>;
		t->SetData(ele);
		if(IsEmpty())
		{
			head =tail =t;
			t->SetNext(head);
			t->SetPrev(tail);
			cdSucc = true;
			count++;
		}
		else{
			t->SetNext(head);
			t->SetPrev(tail);
			tail->SetNext(t);
			tail = t;
			head->SetPrev(tail);
			cdSucc = true;
			count++;
		}
		return cdSucc;
	}
	
	template<class T>
	T CDLinkedList<T>::DelAtBegin()
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
			head->SetPrev(tail);
			tail->SetNext(head);
			delete t;
			count--;
			return ele;
		}
		else
		{
			throw runtime_error("List is Empty!");
		}
	}
	
	template<class T>
	T CDLinkedList<T>::DelAtEnd()
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
			tail = tail->GetPrev();
			tail->SetNext(head);
			head->SetPrev(tail);
			delete t;
			count--;
			return ele;
		}
		else{
			throw runtime_error("List is Empty!");
		}
	}
	
	template<class T>
	void CDLinkedList<T>::Display()
	{
		Node<T>* t = head;
		do{
			cout<<t->GetData()<<"--->";
			t = t->GetNext();
		}while(t != tail);
		cout<<t->GetData()<<endl;
	}
	
	
	template<class T>
	bool CDLinkedList<T>::InsertAtPos(T ele, int pos)
	{
		Node<T> *t = new Node<T>;
		t->SetData(ele);
		bool cSucc = false;
		if(count> pos-1 && pos!=1)
		{
			Node<T> *p = head;
			int n=0;
			while(n!=pos-2)
			{
				p = p->GetNext();
				n++;
			}
			t->SetNext(p->GetNext());
			t->SetPrev(p);
			p->SetNext(t);
			(t->GetNext())->SetPrev(t);
			count++;
			cSucc = true;
 		}
 		else
 		{
 			throw runtime_error("List is either empty or you are trying to add at begining or ending");
 		}
 		
 		return cSucc;
		
	}
	
	
	
	
	
	
	template<class T>
	bool CDLinkedList<T>::ReverseCDLL()
	{
		Node<T> *t = tail;
		while(t!=head)
		{
			cout<<t->GetData()<<"--->";
			t = t->GetPrev();
		}
		cout<<t->GetData()<<endl;
	}
	
template class CDLinkedList<int>;
template class CDLinkedList<char>;

























