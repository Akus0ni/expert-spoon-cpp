#include<iostream>
#include<string>
#include<cstring>
#include"MyPlayer.h"
using namespace std;

void pSort(MyPlayer mp[])
{
	string temp;
	int t;
	for(int i=1;i<3;i++)
	{
		for(int j=1;j<3;j++)
		{
			if(mp[j-1].getName() > mp[j].getName())
			{
				temp = mp[j-1].getName();
				mp[j-1].setName(mp[j].getName());
				mp[j].setName(temp);	
			}
			else if(mp[j-1].getName() == mp[j].getName())
			{
				if(mp[j-1].getAge() > mp[j].getAge())
				{
					t = mp[j-1].getAge();
					mp[j-1].setAge(mp[j].getAge());
					mp[j].setAge(t);	
				}		
			}
		}
	}	
}

MyPlayer::MyPlayer():name("null"),age(0),country("null")
{
	cout<<"Inside DCtor";
}

MyPlayer::MyPlayer(string nm,int a,string cntry):name(nm),age(a),country(cntry)
{
	cout<<"Inside Param Ctor";
}
		
void MyPlayer::Accept()
{
	cout<<"\nEnter Player Details: \n";
	cout<<"Enter Name: ";
	getline(cin,name);
	cout<<"Enter Age: ";
	cin>>age;
	cin.get();
	cout<<"Enter Country: ";
	getline(cin,country);

}

void MyPlayer::Display()
{
	cout<<"\nPlayer Details--";
	cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nCountry: "<<country<<endl;
}

string MyPlayer::getName()
{
	return this->name;
}


int MyPlayer::getAge()
{
	return this->age;
}

void MyPlayer::setName(string n)
{
	this->name = n;
}

void MyPlayer::setAge(int a)
{
	this->age = a;
}



