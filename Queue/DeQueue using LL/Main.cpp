#include"DeQueueLL.h"

int main()
{
	DeQueueLL<int> dqll;
	int ele;
	dqll.AddQEnd(11);
	dqll.AddQBegin(22);
	dqll.AddQEnd(33);
	dqll.AddQBegin(44);
	ele=dqll.DelQEnd();
	ele=dqll.DelQBegin();
	
	cout<<"Size = "<<dqll.Size()<<endl;
	dqll.Display();	
	return 0;
}
