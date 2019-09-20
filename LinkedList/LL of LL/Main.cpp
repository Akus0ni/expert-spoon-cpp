#include"LinkedList.cpp"

int main(int argc, char const *argv[])
{
	LinkedList<LinkedList<int> > ll;
	LinkedList<int> l1[10];
	for (int i = 0; i < 10; ++i)
	{
		l1[i].AddAtBegin(10*(i+1));
		l1[i].AddAtEnd(i+1);
		ll.AddAtEnd(l1[i]);
	}

	ll.Display();

	return 0;
}