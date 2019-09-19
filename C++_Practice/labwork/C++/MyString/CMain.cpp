#include<iostream>
#include"CMyString.h"
using namespace std;

int main()
{
	MyString str1;
	str1.Accept();
	str1.Display();

	MyString str2("Hello");
	str2.Display();

	MyString str3 = str2;		//deep copy

	cout<<"\nString3---- ";
	str3.Display();
	return 0;
}
