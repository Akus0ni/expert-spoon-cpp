#include<iostream>
#include<string>
using namespace std;

class Student
{
	private:
		int rollNo;
		string stName,stCourse;
		static int flag;	
	public:
		Student();
		Student(int rNo,string name,string course);
		void Accept();
		void Display() const;
		int GetFlag() const;
		void SearchSt(int rNo) const;
};
