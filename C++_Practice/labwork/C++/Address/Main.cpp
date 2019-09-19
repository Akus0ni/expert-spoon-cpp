#include<iostream>
#include"Address.h"
using namespace std;

int main()
{
	Address addr;
	Address addr1{"E29/560","Samta Colony","Sadar","Raipur","492001"};

	addr.Accept();
	addr1.Display();

	addr.Compare(addr1);

	if(addr==addr1)
	{
		cout<<"\nAddresses are same (using ==)"<<endl;
	}
	else
	{
		cout<<"\nAddresses are different (using ==)"<<endl;
	}
	return 0;
}
