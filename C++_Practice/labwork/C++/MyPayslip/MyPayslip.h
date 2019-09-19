#include<iostream>
#include<string>
using namespace std;

class MyPayslip
{
	string empNo;
	string empName;
	int da;
	int hra;
	int basics;

	public:
	MyPayslip();
	MyPayslip(string eno,string ename,int da,int hra,int basics);

	void Accept();
	void Display() const;
	
	int Salary() const;

	string GetName();
	string GetEmpNo();
};
