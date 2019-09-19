#include"Complex.h"

int main()
{
	Complex carr[3];
	int real;
	for(int i=0;i<3;i++)
	{
		cout<<"\nEnter Complex Num "<<i+1<<"----"<<endl;
		carr[i].Accept();
	}
	cout<<"\nEnter a Real num to search for: ";
	cin>>real;
	carr[0].SearchReal(carr,3,real);

	Complex c3 = carr[0].Add(carr[1]);
	Complex c4 = carr[0]+carr[1];
	Complex c5 = 2+c3;		//will give error as invoker is int data...so have to make a global funt.
	Complex c6 = c4+3;		//Adding 3 to real part of c4.
	Complex c7 = c6;
	
	c3++;
	++c4;
	c3.Display();
	c4.Display();
	c5.Display();
	c6.Display();
	c7.Display();
	
	/*Complex c1;
	Complex c2{10,4};
	c2.Display();	

	c1.Accept();
	c1.Display();*/
	return 0;
}
