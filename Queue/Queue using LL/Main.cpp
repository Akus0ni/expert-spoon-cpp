#include"QueueLL.h"

int main()
{
	QueueLL<int> qll;
	int ele;
	qll.AddQ(11);
	qll.AddQ(22);
	qll.AddQ(33);
	qll.AddQ(44);
	ele=qll.DelQ();
	ele=qll.DelQ();
	
	cout<<"Size = "<<qll.Size()<<endl;
	qll.Display();	
	return 0;
}
