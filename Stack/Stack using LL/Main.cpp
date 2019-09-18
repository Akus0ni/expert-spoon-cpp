#include"StackLL.h"
#include<iostream>
using namespace std;

int main()
{
	StackLL<int> sll;
	sll.Push(11);
	sll.Push(12);
	sll.Push(13);
		
	cout<<"Element Popped: "<<sll.Pop()<<endl;

	sll.Display();
	return 0;
}
