#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>
using namespace std;



class Complex
{
	int i;
	int j;
	static int flag;
	
	public:
	Complex();
	Complex(int r,int img);
	
	void Accept();
	void Display() const;
	
	//int GetFlag() const;

	void SearchReal(const Complex *c1,int size,int real) const;

	const Complex Add(const Complex &c2) const;
	
	const Complex operator+(const Complex &c2) const;	//Same as Add...Operator '+' Overloaded. 
	
	const Complex operator+(int real) const;
	
	const Complex operator=(const Complex &c2);
	
	bool operator==(const Complex &c2) const;
	bool operator!=(const Complex &c2) const;	

	const Complex& operator ++ ();		//for ++c1
	const Complex operator ++ (int);	//for c1++
};

const Complex operator+(int real,const Complex &c2);
#endif
