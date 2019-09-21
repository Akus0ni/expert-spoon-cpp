#include"LinkedList.cpp"

int main()
{
	LinkedList<LinkedList<int> > ll;
	LinkedList<int> l1;
	for (int i = 0; i < 3; ++i)
	{
		//l1.AddAtBegin(10*(i+1));
		l1.AddAtEnd(10*(i+1));
	}

	ll.AddAtEnd(l1);
	ll.Display();

	return 0;
}