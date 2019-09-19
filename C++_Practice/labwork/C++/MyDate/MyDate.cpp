#include<iostream>
#include"MyDate.h"
#include<cstdlib>
using namespace std;


MyDate::MyDate():dd(0),mm(0),yyyy(0)
{
	cout<<"Default Ctor...\n";
}


MyDate::MyDate(int d,int m,int y):dd(d),mm(m),yyyy(y)
{
	cout<<"Param Ctor..\n";
}


void MyDate::Accept()
{
	//cout<<"\nEnter Date---\n";
	cout<<"Day: ";
	cin>>dd;
	cout<<"Month: ";
	cin>>mm;
	cout<<"Year: ";
	cin>>yyyy;
}
void MyDate::Display() const
{
	//cout<<"Date is(dd/MM/yyyy)---\n";
	cout<<dd<<"/"<<mm<<"/"<<yyyy;
}

void MyDate::Compare(const MyDate &dt2) const
{
	MyDate x = *this;
	int dtDiff;
	dtDiff=x - dt2;
	if(dtDiff==0)
	{
		cout<<"\nDates are same...\n";
	}
	else if(dtDiff>0)
	{
		cout<<"\n";
		Display();
		cout<<" is bigger than ";
		dt2.Display();
		cout<<"\n";
	}
	else
	{	
		cout<<"\n";
		Display();	
		cout<<" is smaller than ";
		dt2.Display();
		cout<<"\n";
	}
}


int MyDate::operator-(const MyDate &dt2) const
{
	long int ly1,ly2,n1,n2;
	//cout<<"\nNo. of Days before Date1: ";
	if(mm>2)
	{
		ly1=(yyyy/4)-(yyyy/100)+(yyyy/400);
	}
	else		//mm<=2;
	{
		ly1=((yyyy-1)/4)-((yyyy-1)/100)+((yyyy-1)/400);
	}

	n1=(yyyy*365)+dd;
	for(int i=1;i<mm;i++)
	{
		n1+=this->months[i];
	}
	//cout<<n1;

	//cout<<"\nNo. of Days before Date2: ";
        if(dt2.mm>2)
        {
                ly2=(dt2.yyyy/4)-(dt2.yyyy/100)+(dt2.yyyy/400);
        }
        else            //dt2.mm<=2;
        {
                ly2=((dt2.yyyy-1)/4)-((dt2.yyyy-1)/100)+((dt2.yyyy-1)/400);
        }

        n2=(dt2.yyyy*365)+dt2.dd;
        for(int i=1;i<dt2.mm;i++)
        {
                n2+=this->months[i];
        }
        //cout<<n2;

	//cout<<"Diff between the dates: "<<abs(n1-n2);
	return (n1-n2);


}


bool MyDate::operator==(const MyDate &dt2) const
{
	return(dd==dt2.dd && mm==dt2.mm && yyyy==dt2.yyyy);
}


bool MyDate::operator!=(const MyDate &dt2) const
{
	return (!((*this)==dt2));
}


/*int MyDate::operator+(const MyDate &dt2) const
{
	
}*/



MyDate::~MyDate()
{
	cout<<"\nDCtor Called..";
}













