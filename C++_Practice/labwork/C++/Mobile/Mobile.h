#include<iostream>
#include<string>
using namespace std;

class Mobile
{
	int modelNo;
	string manuf;
	double price;
	int quantity;
	static int count;
public:
	Mobile();
	Mobile(int mn,string ma,double p,int q);
	void Accept();
	void Display() const;
	int Search(const Mobile mob[],int mn) const;
	int GetCount();
};
