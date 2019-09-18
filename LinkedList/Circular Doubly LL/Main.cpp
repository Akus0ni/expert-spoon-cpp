#include"CDLinkedList.h"
#include"Node.h"
#include<iostream>
using namespace std;

int main()
{
	CDLinkedList<int> dll;
	bool bb;
	int ele;
	bb=dll.AddAtEnd(11);
	bb=dll.AddAtEnd(22);
	bb=dll.AddAtEnd(33);
	bb=dll.AddAtBegin(44);
	bb=dll.AddAtBegin(77);
	
	try{
		ele = dll.DelAtBegin();
		ele = dll.DelAtEnd();
	}catch(runtime_error e)
	{
		cout<<e.what();
	}
	try
	{
		dll.InsertAtPos(55,3);
		dll.InsertAtPos(66,3);
	}
	catch(runtime_error e)
	{
		cout<<e.what();
	}
	cout<<endl<<dll.Size()<<endl;
	
	dll.Display();
	dll.ReverseCDLL();
		
	return 0;
}
