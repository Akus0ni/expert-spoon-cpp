#include"MyArray.h"

template<class T>
MyArray<T>::MyArray():size(0)
{
	p=new T;
	cout<<"\nInside CTOR"<<endl;
}

template<class T>
MyArray<T>::MyArray(int s):size(s)/*,p(new T[size])*/
{
	p=new T[size];
	cout<<"Inside PARAMCTOR"<<endl;
}

template<class T>	
void MyArray<T>::setAt(int index,T value)
{
	p[index]=value;
}

template<class T>
T MyArray<T>::getAt(int index)
{
	return p[index];
}

template<class T>
T& MyArray<T>::At(int index)
{
	return p[index];
}

template<class T>
MyArray<T>::MyArray(const MyArray<T> &x)
{
	this->size=x.size;		//size copied into reference object x.
	this->p = new T [size];	//New dynamic memory allocated to this object to store array.
	for(int i=0;i<size;i++)
	{
		this->p[i]=x.p[i];	//deep copy(content copy)
	}
	//x.p=nullptr;			//error....as it is read only..thats why we add const.
}

template<class T>
MyArray<T>::~MyArray()
{
	cout<<"\nDestroyed!";
	delete []p;
}


template<class T>
bool MyArray<T>::operator ==(const MyArray<T>& y) const
{
	if ((this->size == y.size))
	{
		int count=0;
		for(int i=0;i<size;i++)
		{
			if (p[i]==y.p[i])
			{
				count++;
			}
		}
		return (count==size);
	}
	return false;
}

template<class T>
const MyArray<T>& MyArray<T>::operator =(const MyArray<T>& x)
{
	this->size=x.size;		//size copied into reference object x.
	this->p = new T [size];	//New dynamic memory allocated to this object to store array.
	for(int i=0;i<size;i++)
	{
		this->p[i]=x.p[i];	//deep copy(content copy)
	}
	return *this;
} 

template<class T>
T& MyArray<T>::operator [](int index)
{
	return p[index];
}






