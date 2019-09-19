#include<iostream>
using namespace std;

class MyString
{
	private:
		char *p;
		int size;
	public:
		MyString();
		MyString(char* s);
		MyString(const MyString &str2);

		void Accept();
		void Display() const;

		~MyString();
};
