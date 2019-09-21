#include"LinkList.cpp"

template <class T>
void LinkListcall(LinkList<T> &LL)
{
T Data;
int Choice;
int Position;
do
{
	cout<<"###### MENU 2 ######"<<endl;
	cout<<"1.Add at the Beginning of List."<<endl;
	cout<<"2.Add at the End of List."<<endl;
	cout<<"3.Add at a Specific Position of List."<<endl;
	cout<<"4.Delete from the Beginning of List."<<endl;
	cout<<"5.Delete from the End of List."<<endl;
	cout<<"6.Delete from a Specific Position of List."<<endl;
	cout<<"7.Reverse."<<endl;
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
			cout<<LL.DeleteAtStart();
			break;
		case 5:
			cout<<"Data Deleted from the End of list:";
			cout<<LL.DeleteAtEnd();	
			break;
		case 6:

			cout<<"Enter Position:";
			cin>>Position;
			cout<<"Data deleted from"<<Position<<": ";
			cout<<LL.DeleteInBetween(Position);	
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

exit (0);
}


int main()
{
int Choice; 
LinkList<int> Lint;
LinkList<char> Lchar;	
LinkList<string> Lstring;
LinkList<float>Lfloat;

cout<<"#### MENU (Choice of Link List:) ######"<<endl;
cout<<"1. Interger"<<endl;
cout<<"2. Character"<<endl;
cout<<"3. String"<<endl;
cout<<"4. Float"<<endl;
cout<<"\n\nEnter Choice:";
cin>>Choice;
switch(Choice)
{
	
	case 1:
	LinkListcall(Lint);
	break;

	case 2:
	LinkListcall(Lchar);
	break;

	case 3:
	LinkListcall(Lstring);
	break;

	case 4:
	LinkListcall(Lfloat);
	break;

	default:
	cout<<"!!!!!!!Enter valid choice!!!!!!!!";

}
return 0;
}
