#include"Child2.h"

	Child2::Child2():real1(0),img1(0){
		//cout<<"\nChild2 Created!"<<endl;
	}
	void Child2::Accept()
	{
		cout<<"\nEnter real part: ";
		cin>>real1;
		cout<<"\nEnter Imaginary part: ";
		cin>>img1;
	}
	void Child2::Display() const
	{
		if(img1<0)
			cout<<real1<<" "<<img1<<"i"<<endl;
		else
			cout<<real1<<" + i"<<img1<<endl;
	}
	void Child2::Subst(const Child &ch) 
	{
		//Child2 temp;
		real1 = ch.real - Complex::getReal();
		img1 = ch.img - Complex::getImg();
		//return *this;
	}

	Child2 Child2::Subst()
	{
		Child2 temp;
		temp.real1 = real1 - Complex::getReal();
		temp.img1 = img1 - Complex::getImg();
		return temp;
	}

	Child2::~Child2()
	{
		//cout<<"\nChild 2 Destroyed!!"<<endl;
	}