#include"Complex.h"


Complex::Complex():i(0),j(0)
{
	cout<<"Inside DCTOR"<<endl;
}
Complex::Complex(int r,int img):i(r),j(img)
{
	cout<<"\nInside PARAMCTOR"<<endl;
}
	
void Complex::Accept()
{
	cout<<"\nEnter Real part: ";
	cin>>i;
	cout<<"\nEnter Imaginary part: ";
	cin>>j;
}
void Complex::Display() const
{
	cout<<"\nReal Part is: "<<i;
	cout<<"\nImaginary Part is: "<<j;
}

/*int Complex::GetFlag() const
{
	return flag;
}*/
int Complex::flag=0;
void Complex::SearchReal(const Complex *c1,int size,int real) const
{
	for(int k=0;k<size;k++)
	{
		if(c1[k].i == real)
		{
			cout<<"\nReal Part of Object "<<k+1<<" is "<<real<<endl;
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"No Object has Real part equal to "<<real<<endl;
	}
}

const Complex Complex::Add(const Complex &c2) const
{
	Complex c3;
	c3.i=this->i + c2.i;
	c3.j=this->j + c2.j;
	return c3;
}

const Complex Complex::operator+(const Complex &c2) const
{
	return (Complex(i+c2.i,j+c2.j));	//Anonymous Temp Object
}

const Complex Complex::operator+(int real) const
{
	return(Complex(i+real,j));
}

const Complex operator+(int real,const Complex &c2)		//Global Function for c3= "2+c2" ...
{
	return c2+real;				//this will call the MF - c2.operator+(real)=reverse of 2+c2.
}

bool Complex::operator==(const Complex &c2) const
{
	return(i==c2.i && j==c2.j);
}
bool Complex::operator!=(const Complex &c2) const
{
	return !((*this)==c2);
}

const Complex Complex::operator=(const Complex &c2)
{
	if(*this==c2)
		return *this;
	i=c2.i;
	j=c2.j;
	return *this;
}

const Complex& Complex::operator ++ ()	//Pre-Increment ++c1;
{
	++i;	//incrementing real part of invoking object.
	return *this;
}

const Complex Complex::operator ++ (int)	//Using PHA for differentiating between pre and post increment op.
{
	Complex a = *this;	//a is used as a backup object.
	++i;			//real part of this is incremented.
	return a;
}
