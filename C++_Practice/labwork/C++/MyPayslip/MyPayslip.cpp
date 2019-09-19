#include<iostream>
#include<string>
#include"MyPayslip.h"
using namespace std;


MyPayslip::MyPayslip():empNo(""),empName(""),da(0),hra(0),basics(0)
{
	cout<<"\nDefault CTOR"<<endl;
}

MyPayslip::MyPayslip(string eno,string ename,int da,int hra,int basics):empNo(eno),empName(ename),da(da),hra(hra),basics(basics)
{
	cout<<"Param CTOR"<<endl;
}

void MyPayslip::Accept()
{
	//cout<<"\nEnter Employee Details---"<<endl;
	cout<<"Emp No= ";
	getline(cin,empNo);
	cout<<"Emp Name= ";
	getline(cin,empName);
	cout<<"Daily Allowance= ";
	cin>>da;
	cout<<"House Rent Allowance= ";
	cin>>hra;
	cout<<"Basic Salary= ";
	cin>>basics;

}


void MyPayslip::Display() const
{
	cout<<"\nDetails of Employee are--"<<endl;
	cout<<"Emp No: "<<empNo<<endl;
        cout<<"Emp Name: "<<empName<<endl;
        cout<<"Daily Allowance: "<<da<<endl;
        cout<<"House Rent Allowance: "<<hra<<endl;
        cout<<"Basic Salary: "<<basics<<endl;
}

int MyPayslip::Salary() const
{
	return (da+hra+basics);	
}

string MyPayslip::GetName()
{
	return empName;
}

string MyPayslip::GetEmpNo()
{
	return empNo;
}












