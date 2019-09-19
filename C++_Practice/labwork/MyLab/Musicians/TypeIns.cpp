#include"TypeIns.h"

void TypeIns::get()
{
	cout<<"\n1.String Instruments\n2.Wind Instruments\n3.Percussion Instruments\n4.Exit"<<endl;
}

void TypeIns::show(int choice)
{
	switch(choice)
	{
		case 1:
			String();
			Musicians::show();
			break;
		case 2:
			Wind();
			Musicians::show();
			break;
		case 3:
			Perc();
			Musicians::show();
			break;
		case 4:
			cout<<"\n\t\t\tThanks...\n\t\t\tHope U Loved the Music!"<<endl;
			break;
		default:
			cout<<"\nInvalid Choice."<<endl;
			break;
	}
}



