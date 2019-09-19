#include"TypeIns.h"

int main()
{
	TypeIns ty;
	int choice;
	do{
		ty.get();
		cout<<"\nEnter Choice: ";
		cin>>choice;
		ty.show(choice);
	}while(choice!=4);
	return 0;
}
