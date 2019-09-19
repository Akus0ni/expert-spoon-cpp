#include<iostream>
#include<string>
#include"MyPayslip.h"
using namespace std;

int main()
{
	int sal=0;
	MyPayslip emp;
	MyPayslip emp1{"A983","Akash",10000,20000,45000};
	
	emp.Display();
	emp1.Display();
	
	cout<<"\nEnter Details of Emp--- "<<endl;
	emp.Accept();

	sal = emp.Salary();
	cout<<"Salary of "<<emp.GetEmpNo()<<":"<<emp.GetName()<<" is ----> "<<sal<<endl;

	sal = emp1.Salary();
	cout<<"Salary of "<<emp1.GetEmpNo()<<":"<<emp1.GetName()<<" is ----> "<<sal<<endl;


	return 0;

}
