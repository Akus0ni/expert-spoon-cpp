#include"Employee.h"

	void Employee::Accept()
	{
		cout<<"\nEnter Employee Data----"<<endl;
		Person::Accept();
		cout<<"\nEnter Employee ID: ";
		cin>>eID;
	}

	void Employee::Display()
	{
		cout<<"\nEmployee Record--- "<<endl;
		Person::Display();
		cout<<"\nEmployeeID: "<<eID<<endl;
	}

	/*void Student::PrintAddress()
	{
		cout<<"\nAddress of This: "<<this<<endl;
	}*/
