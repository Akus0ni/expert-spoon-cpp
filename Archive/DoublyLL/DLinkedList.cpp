#include"DLinkedList.h"	

	template<class T>
	DLinkedList<T>::DLinkedList():head(nullptr),tail(nullptr),count(0)
	{
	}
	template<class T>
	DLinkedList<T>::~DLinkedList()
	{
		while(head != nullptr)
		{
			Node<T>* t = head;
			head = head->GetNext();
			delete t;
		}
	}

	template<class T>
	bool DLinkedList<T>::IsEmpty()
	{
		return (head == nullptr && tail == nullptr);
	}
	template<class T>
	int DLinkedList<T>::GetSize()
	{
		return count;
	}

	template<class T>
	void DLinkedList<T>::Display()
	{
		if (IsEmpty())
		{
			cout<<"List is Empty!"<<endl;
			return;
		}
		Node<T>* t = head;
		while(t != nullptr)
		{
			cout<<t->GetData()<<"--->";
			t = t->GetNext();
		}
		cout<<"NULL"<<endl;
	}

	template<class T>
	void DLinkedList<T>::PrintReverseDLL()
	{
		if (IsEmpty())
		{
			cout<<"List is Empty!"<<endl;
			return;
		}
		Node<T>* t = tail;
		while(t != nullptr)
		{
			cout<<t->GetData()<<"--->";
			t = t->GetPrev();			//Use GetPrev() in case of Reverse.
		}
		cout<<"NULL"<<endl;
	}


	template<class T>
	bool DLinkedList<T>::AddAtBegin(T ele)
	{
		Node<T>* t = new Node<T>;
		t->SetData(ele);
		if (IsEmpty())
		{
			head = tail = t;
			count++;
			return true;
		}
		bool res = false;
		t->SetNext(head);
		t->SetPrev(nullptr);
		head->SetPrev(t);
		head = t;
		res = true;
		count++;
		return res;
	}
	template<class T>
	bool DLinkedList<T>::AddAtEnd(T ele)
	{
		Node<T>* t = new Node<T>();
		t->SetData(ele);
		if (IsEmpty())
		{
			head = tail = t;
			count++;
			return true;
		}
		bool res = false;
		t->SetPrev(tail);
		t->SetNext(nullptr);
		tail->SetNext(t);
		tail = t;
		res = true;
		count++;
		return res;
	}
	template<class T>
	bool DLinkedList<T>::AddInBetween(T ele, int pos)
	{
		if(count >= pos-1)
		{
			if(pos == 1)
			{
				return this->AddAtBegin(ele);
			}
			if(count == pos-1)
			{
				return this->AddAtEnd(ele);
			}
			bool res = false;
			Node<T>* p = head;
			int n=1;
			while(n != pos-1)
			{
				p = p->GetNext();
				n++;
			}
			Node<T>* t = new Node<T>();
			t->SetData(ele);
			t->SetNext(p->GetNext());
			t->SetPrev(p);
			p->GetNext()->SetPrev(t);
			p->SetNext(t);
			res = true;
			count++;
			return res;
		}else{
			throw runtime_error("Invalid Position!\nPlease Enter a Valid Position.");
		}
	}

	template<class T>
	T DLinkedList<T>::DelFromBegin()
	{
		if (!IsEmpty())
		{
			Node<T>* t = head;
			T ele = t->GetData();
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
			throw runtime_error("List is Empty! No Items to delete");
		}
	}
	template<class T>
	T DLinkedList<T>::DelFromEnd()
	{
		if (!IsEmpty())
		{
			Node<T>* t = tail;
			T ele = t->GetData();
			if(head == tail)
			{
				head = tail = nullptr;
				delete t;
				count--;
				return ele;
			}
			tail = tail->GetPrev();
			tail->SetNext(nullptr);
			delete t;
			count--;
			return ele;
		}
		else{
			throw runtime_error("List is Empty! No Items to delete");
		}
	}
	template<class T>
	T DLinkedList<T>::DelInBetween(int pos)
	{
		if (count >= pos)		 
		{
			if(pos == 1)
			{
				return this->DelFromBegin();
			}
			if (pos == count)
			{
				return this->DelFromEnd();
			}
			Node<T>* t = head;
			int n = 1;
			while(n != pos)
			{
				t = t->GetNext();
				n++;
			}
			T ele = t->GetData();
			Node<T>* p = t->GetPrev();
			t->GetNext()->SetPrev(p);
			p->SetNext(t->GetNext()); 
			delete t;
			count--;
			return ele;
		}
		else{
			throw runtime_error("Invalid Position! OR List is Empty!");
		}
	}

	










