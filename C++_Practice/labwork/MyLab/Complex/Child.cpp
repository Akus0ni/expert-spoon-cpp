#include"Child.h"

	Child::Child():real(0),img(0){
		//cout<<"\nChild Created!"<<endl;
	}
	void Child::Accept()
	{
		cout<<"\nEnter real part: ";
		cin>>real;
		cout<<"\nEnter Imaginary part: ";
		cin>>img;
	}
	void Child::Display() const
	{
		cout<<real<<" + i"<<img<<endl;
	}
	Child Child::Add()
	{
		Child temp;
		temp.real = this->real + Complex::getReal();
		temp.img = this->img + Complex::getImg();
		return temp;
	}

	Child::~Child(){
		//cout<<"\nChild Destroyed!"<<endl;
	}


istream& operator >>(istream& is,Child& c)
{
	cout<<"\nEnter real & Imaginary: ";
	is>>c.real;
	is>>c.img;
	return is;
}
ostream& operator <<(ostream& os,Child& c)
{
	return os<<"Real: "<<c.real<<"\tImaginary: "<<c.img<<endl;
}

