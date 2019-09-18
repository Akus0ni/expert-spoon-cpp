#include"CLinkedList.cpp"
#include"Node.h"

int main()
{
	int ele;
	CLinkedList<int> cll;
	cll.AddAtBegin(11);
	cll.AddAtBegin(22);
	cll.AddAtEnd(33);
	cll.AddAtEnd(44);
	try
	{
		cll.AddAtPos(55,3);
		cll.AddAtPos(66,6);
	}
	catch(runtime_error e)
	{
		cout<<e.what()<<endl;
	}
	try
	{
		ele = cll.DeleteAtBegin();
		ele = cll.DeleteAtEnd();
	}
	catch(runtime_error e)
	{
		cout<<e.what()<<endl;
	}
	cll.Display();
	try
	{
		cll.ReverseCLL();
	}
	catch(runtime_error e)
	{
		cout<<e.what()<<endl;
	}
	cll.Display();
	cout<<endl<<cll.Size()<<endl;
	
	if(cll.LoopDetector())
	{
		cout<<"Loop Detected!"<<endl;
	}
	return 0;
}
