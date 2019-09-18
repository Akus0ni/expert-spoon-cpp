#include"DeQueueLL.h"
	
	template<class T>
	DeQueueLL<T>::DeQueueLL()
	{}
	
	template<class T>
	bool DeQueueLL<T>::IsEmpty()
	{
		return (ll.IsEmpty());
	}
	
	template<class T>
	int DeQueueLL<T>::Size()
	{
		return (ll.Size());
	}
	
	template<class T>
	void DeQueueLL<T>::Display()
	{
		ll.Display();
	}
	
	template<class T>
	bool DeQueueLL<T>::AddQEnd(T ele)
	{
		return (ll.AddAtEnd(ele));
	}
	
	template<class T>
	T DeQueueLL<T>::DelQBegin()
	{
		return (ll.DeleteAtBegin());
	}
	
	template<class T>
	bool DeQueueLL<T>::AddQBegin(T ele)
	{
		return (ll.AddAtBegin(ele));
	}
	
	template<class T>
	T DeQueueLL<T>::DelQEnd()
	{
		return (ll.DeleteAtEnd());
	}
	
	template<class T>
	DeQueueLL<T>::~DeQueueLL()
	{}
	
	
	
template class DeQueueLL<int>;
template class DeQueueLL<char>;
	
	
	
	
	
	
	
	

