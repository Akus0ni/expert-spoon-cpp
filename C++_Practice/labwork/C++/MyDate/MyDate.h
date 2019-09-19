#include<iostream>
using namespace std;

class MyDate
{
	private:
		int dd,mm,yyyy;
		const int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	public:
		MyDate();
		MyDate(int d,int m,int y);

		void Accept();
		void Display() const;

		void Compare(const MyDate &dt2) const;


		//int Diff(const MyDate &dt2) const;
		int operator-(const MyDate &dt2) const;
		bool operator==(const MyDate &dt2) const;
		bool operator!=(const MyDate &dt2) const;
		//int operator+(const MyDate &dt2) const;

		~MyDate();
};
