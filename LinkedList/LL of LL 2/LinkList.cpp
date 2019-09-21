
#include"LinkList.h"

template <class T>
LinkList<T>::LinkList():count(0),head(nullptr),tail(nullptr)
 {
 }

template <class T>
bool LinkList<T>::IsEmpty()
{
 return (head==NULL && tail==NULL);
}


template <class T>
void LinkList<T>::Display()
{
	 if(IsEmpty())
	{
		cout<<"\nNo items to display"<<endl;
		return;
	}
	Node<T> *temp=head;

	 while(temp !=NULL)
	 {
		  cout<<temp->GetData()<<"------>";
		   temp= temp->GetNext();
	 }
	cout<<"NULL";
}


template <class T>
bool LinkList<T>::AddAtStart(T ele)
{
	bool Succ=false;
  Node<T> *temp = new Node<T>;
  temp->SetData(ele);	  
	
	if(IsEmpty())
	{		
	 temp->SetNext(nullptr);
	 head = temp;
	 tail = temp;
	 count++;
	}
	else
	{
	 temp->SetNext(head);
	 head = temp;
     	count++;
	}
Succ=true;
return Succ;
}

template <class T>
bool LinkList<T>::AddAtEnd(T ele)
{
  bool Succ = false;
  Node<T> *temp = new Node<T>;
  temp->SetData(ele);	  
	
	if(IsEmpty())
	{		
	 temp->SetNext(nullptr);
	 head = temp;
	 tail = temp;
	 count++;
     Succ = true;
	}
	else
	{
	 temp->SetNext(nullptr);
	 tail->SetNext(temp);
	 tail = temp;
     count++;
     Succ = true;
	}
 return Succ;
}



template <class T>
bool LinkList<T>::AddInBetween(int pos,T ele)
{
    bool Succ = false;
 	if(count >=  pos-1 && pos>1)
	{

	  Node<T> *p = head;
	  Node<T> *q=head->GetNext();
	  int no=0;
	  while(no != pos-2)
	  {
		p=p->GetNext();
		q=q->GetNext();
		no++;
	  }
	 Node<T> *temp = new Node<T>;
	 temp->SetNext(q);
	 temp->SetData(ele); 
	 p->SetNext(temp);
	 count++;
	 Succ = true;
	}
return Succ;
}



template <class T>
T LinkList<T>::DeleteAtStart()
{ 
 T ele;
 if(!IsEmpty())
 {
    ele = head->GetData();
	Node<T> *temp = head;
 	if(head == tail)
 	{
 	tail = NULL;
	head = NULL;
    delete temp;
    count--;
 	}
    else
	{
	 ele = head->GetData();
 	 head = head->GetNext();
  	 delete temp;
  	 count--;
	 
	}
 }
return ele;

}

template <class T>
T LinkList<T>::DeleteAtEnd()
{
 T ele;
 if(!IsEmpty())
 {
      ele = tail->GetData();
      Node<T> *temp = tail;
 	if(head == tail)
 	{
        head = NULL;
       	delete tail;
		tail= NULL;
        count--;
 	}
    else
	{
 	 Node<T> *temp = head;
	 while(tail != temp->GetNext()) 
	 {
 	   temp = temp->GetNext();
	 }
		ele=tail->GetData();
         temp->SetNext(NULL);
		delete tail;
         count--;
		tail = temp;
         
        }

	}
 return ele;
}


template<class T>
T LinkList<T>::DeleteInBetween(int position)
{
	
	Node<T> *temp=new Node<T>;
	T ele;
	if(count>position-1 && position>1)
	{
	Node<T> *p=head;
	Node<T> *q=head->GetNext();
	int i=0;
	while(i!=position-2)
	{
		p=p->GetNext();
		q=q->GetNext();
		i++;
	}
	temp=q;
	q=q->GetNext();
	p->SetNext(q);
	ele=temp->GetData();
	delete temp;
	count--;
	}
	else
	throw runtime_error("!!!!Invalid Position cannot delete data!!!");	  
return ele;
}



template <class T>
bool LinkList<T>::Reverse()
{
  bool Succ = false;
  if(!IsEmpty())
  {
	Node<T> *nhead = head,*temp=nullptr;
	head = head->GetNext();
	nhead->SetNext(nullptr);
	tail = nhead;
	
	while(head != NULL)
	{
	   temp= head;
	   head = head->GetNext();
	   temp->SetNext(nhead);
	   nhead =temp;
    }
        head = nhead;
	Succ = true;
  }
return Succ;
}

template <class T>
int LinkList<T>::Size()
{
 return count;
}



template<class T>
void LinkList<T>::Display(LinkList<T> LL) 
{

if(LL.IsEmpty())
{
cout<<"\nMajor LinkList Empty"<<endl;
return;
}

Node<T> *temp=head;
LinkList<int> t;
 while(temp !=NULL)
 {
  t=temp->GetData();
	t.Display();
cout<<"\n\n";
   temp= temp->GetNext();
 }

}

