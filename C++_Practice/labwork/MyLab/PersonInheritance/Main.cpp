#include"Student.h"
#include"Employee.h"

int main()
{
	Student s;
	Employee e;

	s.Accept();
	e.Accept();
	s.Display();
	e.Display();
	s.PrintAddress();
	e.PrintAddress();
	return 0;
}