#ifndef COMPLEX_H
#define COMPLEX_H


#include<iostream>
using namespace std;

class Complex
{
	int real;
	int img;
public:
	Complex();
	void Accept();
	void setReal(int r);
	int getReal() const;
	void setImg(int i);
	int getImg() const;
	void Display() const;
	~Complex();
	
};



#endif