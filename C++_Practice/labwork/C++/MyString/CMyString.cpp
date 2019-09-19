#include<iostream>
#include<cstring>
#include"CMyString.h"
using namespace std;

MyString::MyString():size(0),p(new char)
{
	*p='\0';
}


MyString::MyString(char* s):size(strlen(s)),p(new char[size+1])
{
	cout<<"\nString with size "<<this->size<<" allocated Dynamically";
	strcpy(p,s);
}


MyString::MyString(const MyString &str2)			//Copy Ctor(for Deep Copy)
{
	this->size = str2.size;
	this->p = new char[size+1];
	for(int i=0;i<size;i++)
	{
		p[i]=str2.p[i];			//each char in heap is copied to this from str2.
	}
}


void MyString::Accept()			
{
	cout<<"Enter Size: ";
	cin>>size;
	p=new char[size+1];
	cout<<"Enter String: ";
	cin>>p;
}


void MyString::Display() const
{
	cout<<"Size= "<<size;
	cout<<"String= ";
	for(int i=0;i<size;i++)
	{
		cout<<p[i];
	}
}



MyString::~MyString()
{
	delete []p;
}




