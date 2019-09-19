#ifndef CHILD_H
#define CHILD_H

#include"Complex.h"

class Child: public Complex
{
	int real;
	int img;
public:
	Child();
	void Accept();
	void Display() const;
	Child Add();
	~Child();
	
	friend class Child2;

	friend istream& operator >>(istream& is,Child& c);		//To Access Private Members of This Class..We use friend keyword...
	friend ostream& operator <<(ostream& os,Child& c);
};

istream& operator >>(istream& is,Child& c);
ostream& operator <<(ostream& os,Child& c);

#endif