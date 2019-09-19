#include<iostream>
using namespace std;

class ArrOfPtr
{
	private:
	int size;
	int* arrPtr;
	
	public:
	ArrOfPtr()
	{
		cout<<"Inside DCTOR"<<endl;
		cout<<"\nEnter Size: ";
		cin>>size;
		arrPtr = new int[size];
	}
	ArrOfPtr(int s):size(s)
	{
		cout<<"Inside PARAMCTOR"<<endl;
		arrPtr = new int[size];
	}

	void Accept()
	{	
		//cout<<"\nEnter Array of Integers: "<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<"Enter element "<<i+1<<": ";
			cin>>arrPtr[i];
		}
	}

	void Display() const
	{
		//cout<<"\n--------Displaying Array of Integers--------"<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<"Element "<<i+1<<": "<<arrPtr[i]<<endl;
		}
	}

	~ArrOfPtr()
	{
		cout<<"\nDeleting Dynamic Allocated Memory";
		delete []arrPtr;	
	}
};

int main()
{
	ArrOfPtr np[3];
	for(int i=0;i<3;i++)
	{
		cout<<"\nEnter Array of Integers for ArrayObj "<<i+1<<endl;
		np[i].Accept();
	}
	for(int i=0;i<3;i++)
	{
	cout<<"\n--------Displaying Array of Integers for ArrayObj "<<i+1<<"--------"<<endl;
		np[i].Display();
		cout<<endl;
	}
	return 0;
	
}
