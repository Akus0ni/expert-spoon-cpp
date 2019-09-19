#include<iostream>
#include<string>
#include"Student.h"
using namespace std;


int main()
{
	int rNo;
	Student s1;
	Student s2(100,"Akash","PG-DESD");
	Student *sp=new Student[5];		//Dynamic allocation

	s1.Display();
	s2.Display();
	/*for(int i=0;i<5;i++)
	{
		cout<<"\nDetails of Student"<<i+1<<endl;
		sp[i].Display();
	}*/
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter Details of Student"<<i+1<<endl;
		sp[i].Accept();
	}
	cout<<"\nEnter Roll No to Search: "<<endl;
	cin>>rNo;
	for(int i=0;i<5;i++)
	{
		sp[i].SearchSt(rNo);
	}
	if(sp->GetFlag()==0)
		cout<<"\nNo Record Found.";
	return 0;
}
