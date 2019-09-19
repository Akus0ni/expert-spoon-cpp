#include<iostream>
#include<cstring>
#include<stdexcept>
using namespace std;
#define SIZE 50
class Student
{
	int rollNo;
	char name[SIZE];
	char course[SIZE];
public:
	Student();
	Student(int rNo,char n[],char c[]);
	~Student();

	void Accept();
	void Display() const;

	Student FindStud(int r,const Student s[]) const;
	
};