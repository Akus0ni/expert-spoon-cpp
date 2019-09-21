#include<iostream>

template<class T>
class RowList
{
	int row;
	RowList *down;
	ValueList<T> *right;
public:
	Node();
	~Node();
	
};