#include"LinkedList.h"

template<class T>
class QueueLL
{
	LinkedList<T> ll;
	public:
	QueueLL();
	bool IsEmpty();
	int Size();
	void Display();
	
	bool AddQ(T ele);
	T DelQ();
	~QueueLL();
	
};
