#include<iostream>
#include<cstdlib>
#include"MyDate.h"
using namespace std;

int main()
{
	MyDate dt;
	MyDate dt1(2,5,2010);
	MyDate dt2=dt1;		//deep copy
	cout<<"\nDate 0 (default Ctor): ";
	dt.Display();
	cout<<"\nDate 2: ";
        dt2.Display();

	cout<<"\nEnter Date 1---";
	dt1.Accept();

	cout<<"Date2 (after Modification of date1): ";
	dt2.Display();

	int dtDiff = dt1-dt2;					//dt1-dt2 = dt1.operator-(dt2)----operator Overloading...
	cout<<"\nDiff between the dates: "<<abs(dtDiff);

	dt1.Compare(dt2);

	cout<<"\nComparing Dates...Again(using overloaded operator): "<<endl;
	if(dt1==dt2)
	{
		cout<<"Dates are same..."<<endl;
	}
	else if(dt1!=dt2)
	{
		cout<<"Dates are different..."<<endl;
	}

	return 0;
}
