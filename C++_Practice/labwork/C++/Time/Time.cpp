#include<iostream>
#include<cstdlib>
#include"Time.h"
using namespace std;

Time::Time():hours(0),minutes(0),seconds(0)
{
	cout<<"\nInside Default Ctor...\n";
}

Time::Time(int h, int m, int s):hours(h),minutes(m),seconds(s)
{
	cout<<"Inside Param Ctor...\n";
}
		
Time::Time(const Time &r1)			//Copy Ctor
{
	cout<<"Inside Copy Ctor..\n";
	this->hours=r1.hours;
	this->minutes=r1.minutes;
	this->seconds=r1.seconds;
}

void Time::Display() const
{
	//cout<<"\nHours:Minutes:Seconds\n";
	cout<<hours<<"hrs:"<<minutes<<"min:"<<seconds<<"sec";
}

void Time::Accept()
{
	cout<<"Enter Time ---\n";
	cout<<"Hours: ";
	cin>>hours;
	cout<<"Mins: ";
	cin>>minutes;
	cout<<"Secs: ";
	cin>>seconds;
	
}

void Time::CmpTime(const Time &r1,const Time &r2) const
{
	int t1Sec=r1.CalSec();
	int t2Sec=r2.CalSec();
	int diffSec=t1Sec-t2Sec;
	if(diffSec==0)
		cout<<"Both are same...";
	else 
		if(diffSec>0)
		{
			r1.Display();
			cout<<" is later than ";
			r2.Display();
		}
		else
			if(diffSec<0)
			{
				r1.Display();
				cout<<" is earlier than ";
				r2.Display();
			}
}


int Time::CalSec() const
{
	 return ((this->seconds)+(this->hours*3600)+(this->minutes*60));
}

void Time::DiffTime(const Time &r1,const Time &r2) const
{
	Time td;
	int t1Sec=r1.CalSec();
	int t2Sec=r2.CalSec();
	int diffSec=abs(t1Sec-t2Sec);
	cout<<"\nDiff between T1 & T2: ";
	td.hours = (diffSec/3600);
	td.minutes = diffSec<3600 ? (diffSec/60) : (diffSec%3600);
	td.seconds = diffSec<60 ? (diffSec) : (diffSec%60);
	td.Display();
	cout<<"\n";
}

Time::~Time()
{
	cout<<"\nDestructor called..";
}
