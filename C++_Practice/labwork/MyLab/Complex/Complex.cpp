#include"Complex.h"

	Complex::Complex():real(100),img(100){
		//cout<<"\nComplex Created!"<<endl;
	}

	void Complex::Accept()
	{
		cout<<"\nEnter real part: ";
		cin>>real;
		cout<<"\nEnter Imaginary part: ";
		cin>>img;
	}
	void Complex::setReal(int r)
	{
		real = r;
	}
	int Complex::getReal() const
	{
		return real;
	}
	void Complex::setImg(int i)
	{
		img = i;
	}
	int Complex::getImg() const
	{
		return img;
	}
	void Complex::Display() const
	{
		cout<<real<<" + i"<<img<<endl;
	}
	Complex::~Complex()
	{
		//cout<<"\nComplex Destroyed!"<<endl;
	}