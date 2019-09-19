#include"Student.h"
#include<iomanip>
int main(int argc, char const *argv[])
{
	Student st[3];
	Student ss;
	int r;
	for (int i = 0; i < 3; ++i)
	{
		st[i].Accept();
	}
	cout<<"Enter Roll No to Search for: ";
	cin>>r;
	try
	{
		ss = ss.FindStud(r,st);
		cout<<setw(50)<<"\n************Student with Roll No = "<<r<<"**************"<<endl;
		ss.Display();
	}
	catch(runtime_error e)
	{
		cout<<e.what()<<endl;
	}
	
	return 0;
}