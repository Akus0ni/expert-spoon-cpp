#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
		
Student::Student():rollNo(0),stName("Archit"),stCourse("PG-DAC")
{
	cout<<"Inside Default Ctor!"<<endl;
}

Student::Student(int rNo,string name,string course)
{
	cout<<"Inside Param Ctor!"<<endl;
	this->rollNo=rNo;
	this->stName=name;
	this->stCourse=course;
}

void Student::Accept()
{
	cout<<"Enter Roll No = ";
	cin>>rollNo;
	cout<<"\nEnter Name of Student = ";
	cin>>stName;
	cout<<"\nEnter Course = ";
	cin>>stCourse;
}

void Student::Display() const
{
	cout<<"\nRoll No = "<<rollNo<<"\nName of Student = "<<stName<<endl<<"Course = "<<stCourse;
}

int Student::GetFlag() const
{
	return flag;
}

int Student::flag=0;

void Student::SearchSt(int rNo) const
{
	if(this->rollNo==rNo)
	{
		cout<<"Record Found-----";
		this->Display();
		flag=1;
		return;
	}	
}
