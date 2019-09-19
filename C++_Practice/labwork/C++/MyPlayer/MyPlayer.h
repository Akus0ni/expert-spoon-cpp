#include<iostream>
#include<string>
using namespace std;

//void Sort(MyPlayer mp[]);

class MyPlayer
{
	private:
		string name;
		int age;
		string country;
	public:
		MyPlayer();
		MyPlayer(string nm,int a,string cntry);
		
		void Accept();
		void Display();

		string getName();
		void setName(string n);

		int getAge();
		void setAge(int a);
};
void pSort(MyPlayer mp[]);

