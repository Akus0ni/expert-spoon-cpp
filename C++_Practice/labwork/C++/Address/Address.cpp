#include<iostream>
#include<string>
#include"Address.h"
using namespace std;


Address::Address():hno(""),colony(""),area(""),city(""),pin("")
{
	cout<<"Inside DCTOR"<<endl;	
}


Address::Address(string h,string col,string ar,string ct,string p):hno("B16-201"),colony("Bohara"),area("Sadar"),city("Raipur"),pin("1335645")
{
	cout<<"Inside PCTOR"<<endl;
}


void Address::Accept()
{
	cout<<"\nPlease Enter Address Details---- "<<endl;
	cout<<"House No= ";
	getline(cin,hno);	
	cout<<"Colony= ";
	getline(cin,colony);	
	cout<<"Area= ";
	getline(cin,area);	
	cout<<"City= ";
	getline(cin,city);	
	cout<<"Pin= ";
	getline(cin,pin);	
}


void Address::Display() const
{
	cout<<"\nAddress Details---- "<<endl;
        cout<<"House No= "<<hno<<endl;
        cout<<"Colony= "<<colony<<endl;
        cout<<"Area= "<<area<<endl;
        cout<<"City= "<<city<<endl;
        cout<<"Pin= "<<pin<<endl;
}

void Address::Compare(const Address& addr) const
{
	if(hno==addr.hno && colony==addr.colony && area==addr.area && city==addr.city && pin==addr.pin)
	{
		cout<<"Both addresses are same..."<<endl;
	}
else
	{
		cout<<"Not same.."<<endl;
	}
}

bool Address::operator==(const Address& addr) const
{
	return(hno==addr.hno && colony==addr.colony && area==addr.area && city==addr.city && pin==addr.pin);
}







