#include"DLinkedList.h"
#include"Node.h"
#include<iostream>
using namespace std;

int main()
{
	DLinkedList<int> ll;
	bool bb;
	int ele;
	bb=ll.AddAtEnd(11);
	bb=ll.AddAtEnd(22);
	bb=ll.AddAtEnd(33);
	//bb=ll.AddAtBegin(44);
	//bb=ll.AddAtEnd(55);
	//bb=ll.AddAtEnd(66);
	bb=ll.AddAtBegin(77);
	try{
		bb = ll.InsertAt(55,4);
		bb = ll.InsertAt(66,3);
	}catch(runtime_error e)
	{
		cout<<e.what();
	}
	try{
		ele = ll.DeleteAtBegin();
		ele = ll.DeleteAtEnd();
	}catch(runtime_error e)
	{
		cout<<e.what();
	}
	
	cout<<endl<<ll.Size()<<endl;
	ll.PrintReverseDLL();
	ll.Display();	
	return 0;
}
