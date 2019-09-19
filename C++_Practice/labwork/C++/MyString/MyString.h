#include<iostream>
using namespace std;

class MyString
{
	private:
		char *p;
		int size;
	public:
		MyString();
		MyString(int s);
		MyString(const MyString &str2);

		char& At(int index);
		void Display() const;

		~MyString();
};
