#include"QueueLL.h"
	
	template<class T>
	QueueLL<T>::QueueLL()
	{}
	
	template<class T>
	bool QueueLL<T>::IsEmpty()
	{
		return (ll.IsEmpty());
	}
	
	template<class T>
	int QueueLL<T>::Size()
	{
		return (ll.Size());
	}
	
	template<class T>
	void QueueLL<T>::Display()
	{
		ll.Display();
	}
	
	template<class T>
	bool QueueLL<T>::AddQ(T ele)
	{
		return (ll.AddAtEnd(ele));
	}
	
	template<class T>
	T QueueLL<T>::DelQ()
	{
		return (ll.DeleteAtBegin());
	}
	
	template<class T>
	QueueLL<T>::~QueueLL()
	{}
	
	
	
template class QueueLL<int>;
template class QueueLL<char>;
	
	
	
	
	
	
	
	

