#ifndef STUDENT_CPP
#define STUDENT_CPP

#include"Student.h"

template<class K,class E>
Student<K,E>::Student():rollNo(0),name(""),course("")
{
}

template<class K,class E>
Student<K,E>::~Student()
{
}

template<class K,class E>
void Student<K,E>::Accept()
{
    cout << "\nRoll No: ";
    cin>>rollNo;
    cin.ignore(1);
    cout<<"\nEnter Name: ";
    getline(cin,name);
    cout<<"\nEnter Course: ";
    getline(cin,course);
}

template<class K,class E>
void Student<K,E>::Display() const
{
    cout<<"\nRoll No: "<<rollNo;
    cout<<"\nName: "<<name;
    cout<<"\nCoourse: "<<course;
}


#endif

