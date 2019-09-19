#include"Mobile.h"
using namespace std;

int Mobile::count=0;
Mobile::Mobile():modelNo(0),manuf("NULL"),price(0),quantity(0)
{
	cout<<"Inside DCtor\n";
}

Mobile::Mobile(int mn,string ma,double p,int q):modelNo(mn),manuf(ma),price(p),quantity(q)
{
	cout<<"Inside PCtor1\n";
}


void Mobile::Accept()
{
	cout<<"Enter Values---\n";
	cout<<"Model No= ";
	cin>>modelNo;
	cin.get();
	cout<<"Manufacturer: ";
	getline(cin,manuf);
	cout<<"Price: ";
	cin>>price;
	cout<<"quantity: ";
	cin>>quantity;
	count++;
}


void Mobile::Display() const
{
	cout<<"Model No= ";
        cout<<modelNo<<endl;
        cout<<"Manufacturer: ";
        cout<<manuf<<endl;
        cout<<"Price: ";
        cout<<price<<endl;
        cout<<"quantity: ";
        cout<<quantity<<endl;
}
int Mobile::Search(const Mobile mob[],int mn) const
{
	for(int i=0;i<count;i++)
	{
		if(mob[i].modelNo==mn)
		{
			return mob[i].quantity;
			break;
		}
		else
		{
			continue;
		}
	}
	return -1;
}

int Mobile::GetCount()
{
	return count;
}
