#include<iostream>
#include"MyString.h"
using namespace std;

MyString::MyString():size(2),p(new char[size])
{
	cout<<"\nString with size 2 allocated Dynamically";
	p[0]='A';
	p[1]='n';
}


MyString::MyString(int s):size(s),p(new char[size])
{
	cout<<"\nString with size "<<this->size<<" allocated Dynamically";
}


MyString::MyString(const MyString &str2)			//Copy Ctor(for Deep Copy)
{
	this->size = str2.size;
	this->p = new char[size];
	for(int i=0;i<size;i++)
	{
		p[i]=str2.p[i];			//each char in heap is copied to this from str2.
	}
}


char& MyString::At(int index)			//Used for getting and setting both
{
	if(index>=0 && index<size)
		return p[index];
}


void MyString::Display() const
{
	for(int i=0;i<size;i++)
	{
		cout<<p[i];
	}
}



MyString::~MyString()
{
	delete []p;
}




