#ifndef STUDENT_H
#define STUDENT_H

#include<string>
#include<iostream>
using namespace std;

template<class K,class E>
class Student
{
private:
    K rollNo;
    E name,course;
public:
    Student();
    ~Student();

    void Accept();
    void Display() const;
};


#endif