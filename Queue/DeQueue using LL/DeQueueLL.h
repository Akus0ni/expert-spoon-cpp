#include"LinkedList.h"

template<class T>
class DeQueueLL
{
	LinkedList<T> ll;
	public:
	DeQueueLL();
	bool IsEmpty();
	int Size();
	void Display();
	
	bool AddQEnd(T ele);
	bool AddQBegin(T ele);
	T DelQEnd();
	T DelQBegin();
	~DeQueueLL();
	
};
