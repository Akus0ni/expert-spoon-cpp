#include"Student.h"

	void Student::Accept()
	{
		cout<<"\nEnter Student Data----"<<endl;
		Person::Accept();
		cout<<"\nEnter Student ID: ";
		cin>>sID;
	}

	void Student::Display()
	{
		cout<<"\nStudent Record--- "<<endl;
		Person::Display();
		cout<<"\nStudentID: "<<sID<<endl;
	}

	/*void Student::PrintAddress()
	{
		cout<<"\nAddress of This: "<<this<<endl;
	}*/
