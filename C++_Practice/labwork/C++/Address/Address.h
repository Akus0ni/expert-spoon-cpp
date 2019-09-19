#include<iostream>
#include<string>
using namespace std;

class Address
{
	string hno;
	string colony;
	string area;
	string city;
	string pin;
	
	public:
	Address();
	Address(string h,string col,string ar,string ct,string p);

	void Accept();
	void Display() const;

	void Compare(const Address& addr) const;

	bool operator==(const Address& addr) const;

};
