#include<iostream>
#include"MyString.h"
using namespace std;

int main()
{
	MyString str1;
	cout<<"\nString1---- ";
	str1.Display();

	MyString str2(3);
	str2.At(0)='A';
	str2.At(1)='B';
	str2.At(2)='C';

	cout<<"\nString2---- ";
	str2.Display();

	MyString str3 = str2;		//deep copy

	cout<<"\nString3---- ";
	str3.Display();
}
