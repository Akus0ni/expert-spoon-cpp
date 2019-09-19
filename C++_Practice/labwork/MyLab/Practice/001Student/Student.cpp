#include"Student.h"

Student::Student():rollNo(0)
{
	strcpy(name,"NULL");
	strcpy(course,"NULL");
}
Student::Student(int rNo,char n[],char c[]):rollNo(rNo)/*,name(n),course(n)*/
{
	strcpy(name,n);
	strcpy(course,c);
}
Student::~Student()
{
	cout<<"\nStudent Destroyed!"<<endl;
}

void Student::Accept()
{
	cout<<"------------Student's Data Entry-------------"<<endl;
	cout<<"Enter Roll No: ";
	cin>>rollNo;
	cin.ignore(1);
	cout<<"Enter Name of Student: ";
	//fgets(name,50,cin);
	cin.getline(name,49);
	cout<<"Enter Course: ";
	cin.getline(course,49);
}
void Student::Display() const
{
	cout<<"Roll No:- "<<rollNo<<"\nName: "<<name<<"\nCourse: "<<course<<endl;
}

Student Student::FindStud(int r,const Student s[]) const
{
	int cunt=0;
	Student sF;
	//cout<<"\n************Student with Roll No = "<<r<<"**************"<<endl;
	for (int i = 0; i < 3; ++i)
	{
		if(s[i].rollNo == r)
		{	
			sF = s[i];
			/*cout<<"\nName: "<<name<<"\nCourse: "<<course<<endl;*/
			cunt++;
		}
	}
	if(cunt == 0)
	{
		throw runtime_error("No Student found ");
	}
	return sF;
}
















