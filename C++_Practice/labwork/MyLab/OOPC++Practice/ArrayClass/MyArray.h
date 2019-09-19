#include<iostream>
using namespace std;

template<class T>
class MyArray
{
	T *p;
	int size;

	public:
	MyArray();
	MyArray(int s);
	MyArray(const MyArray &x); 
	void setAt(int index,T value);
	T getAt(int index);

	T& At(int index);

	bool operator ==(const MyArray& y) const;
	const MyArray& operator =(const MyArray& z);

	T& operator [](int index); 
	~MyArray();
};
