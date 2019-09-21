#include"LinkList.cpp"



int main()
{
int Choice,MChoice, MainChoice=1; 
int Data;
int Position;
LinkList<LinkList<int>> LofL;
int MPosition;

do
{
{
LinkList<int> LL;
do
{
	cout<<"###### MENU LINK LIST ######"<<endl;
	cout<<"1.Add at the Beginning of List."<<endl;
	cout<<"2.Add at the End of List."<<endl;
	cout<<"3.Add at a Specific Position of List."<<endl;
	cout<<"4.Delete from the Beginning of List."<<endl;
	cout<<"5.Delete from the End of List."<<endl;
	cout<<"6.Delete from a Specific Position of List."<<endl;
	cout<<"7.Reverse List."<<endl;
	cout<<"8.Display List."<<endl;	
	cout<<"9.Exit."<<endl;	

	cout<<"\n\nEnter Choice:";
	cin>>Choice;
	switch(Choice)
	{
		case 1:
			cout<<"Enter Data to Add at the beginning of list:";			
			cin>>Data;
			if(!LL.AddAtStart(Data))
			throw runtime_error("!!!insertion failed");	
			break;
		case 2:
			cout<<"Enter Data to Add at the End of list:";
			cin>>Data;
			if(!LL.AddAtEnd(Data))
			throw runtime_error("!!!!!Insertion failed!!!!!");	
			break;
		case 3:
			cout<<"Enter Position:";
			cin>>Position;
			cout<<"Enter Data to Add at Position "<<Position<<" of list:";
			cin>>Data;	
			if(!LL.AddInBetween(Position,Data))
			cout<<"!!!!!Enter valid position!!!!!";
			break;
		case 4:
			cout<<"Data Deleted from the Beginning of list:";
			Data=LL.DeleteAtStart();
			cout<<Data;
			break;
		case 5:
			cout<<"Data Deleted from the End of list:";
			Data=LL.DeleteAtEnd();	
			cout<<Data;			
			break;
		case 6:
			cout<<"Enter Position:";
			cin>>Position;
			cout<<"Data deleted from"<<Position<<": ";
			Data=LL.DeleteInBetween(Position);	
			cout<<Data;
			break;
		
		case 7:
			if(!LL.Reverse())
			cout<<"Reverse unsuccessful.";
			break;
		case 8:

			LL.Display();	
			cout<<"\nSize of List is: "<<LL.Size();
			break;
}
}while(Choice!=9);

do
{
	cout<<"###### MENU Major LINK LIST ######"<<endl;
	cout<<"1.Add at the Beginning of Major List."<<endl;
	cout<<"2.Add at the End of Major List."<<endl;
	cout<<"3.Add at a Specific Position of Major List."<<endl;
	cout<<"4.Delete from the Major Beginning of List."<<endl;
	cout<<"5.Delete from the Major End of List."<<endl;
	cout<<"6.Delete from a Specific Position of Major List."<<endl;
	cout<<"7.Reverse List."<<endl;
	cout<<"8.Display List."<<endl;	
	cout<<"9.Exit."<<endl;	

	cout<<"\n\nEnter Choice:";
	cin>>MChoice;
	switch(MChoice)
	{
		case 1:
			if(!LofL.AddAtStart(LL))
			throw runtime_error("!!!insertion failed");	
			break;
		case 2:
			if(!LofL.AddAtEnd(LL))
			throw runtime_error("!!!!!Insertion failed!!!!!");	
			break;
		case 3:
			cout<<"Enter Position:";
			cin>>MPosition;	
			if(!LofL.AddInBetween(Position,LL))
			cout<<"!!!!!Enter valid position!!!!!";
			break;
		case 4:
			LL=LofL.DeleteAtStart();
			cout<<"Deleted link list:";			
			LL.Display();
			break;
		case 5:
			LL=LofL.DeleteAtEnd();	
			cout<<"Deleted link list:";			
			LL.Display();	
			break;
		case 6:
			cout<<"Enter Position:";
			cin>>MPosition;
			cout<<"Data deleted from"<<Position<<": ";
			LL=LofL.DeleteInBetween(Position);	
			cout<<"Deleted link list:";			
			LL.Display();
			break;
		
		case 7:
			if(!LofL.Reverse())
			cout<<"Reverse unsuccessful.";
			break;
		case 8:

			LofL.Display(LofL);	
			cout<<"\nSize of List is: "<<LofL.Size();
			break;
}
}while(MChoice!=9);

}
cout<<"Press 1 to contiune: ";
cin>>MainChoice;
}while(MainChoice==1);

return 0;
}
