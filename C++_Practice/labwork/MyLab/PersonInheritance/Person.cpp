#include"Person.h"

	void Person::Accept()
	{
		cout<<"\nEnter Name: ";
		cin>>this->name;
		cout<<"\nEnter Age: ";
		cin>>this->age;
	}
	void Person::Display()
	{
		cout<<"\nName: "<<this->name;
		cout<<"\nAge: "<<this->age<<endl;
	}
	void Person::PrintAddress()
	{
		cout<<"\nAddress of This: "<<this<<endl;
	}











