#include"LinkedList.cpp"
#include<iomanip>

int main()
{
	LinkedList<int> ll;
	LinkedList<int> ll2;
	bool bb;
	int ele;
	bb=ll.AddAtEnd(11);
	bb=ll.AddAtEnd(22);
	bb=ll.AddAtEnd(33);
	bb=ll.AddAtBegin(44);
	
	bb = ll.InsertAt(55,5);
	bb = ll.InsertAt(66,3);
	ele = ll.DeleteAtBegin();
	ele = ll.DeleteAtEnd();
	
	bb=ll2.AddAtEnd(55);
	bb=ll2.AddAtEnd(20);
	bb=ll2.AddAtEnd(30);
	bb=ll2.AddAtEnd(77);
	bb=ll2.AddAtEnd(10);
	bb=ll2.AddAtEnd(15);
	//ll.ReverseLL();
	
	//ll.Display();	
	
	ll.Sorting();
	ll.Display();
	ll2.Sorting();
	ll2.Display();
	
	
	ll.Merge(ll2);
	ll.Display();
	ll.AddInsert();
	ll.Display();
	
	
	/*LinkedList<int> ill;
	int choice;
	do{
		
		cout<<setw(75)<<"\n*******************Menu******************\n";
		cout<<"1.Insert An Element at Beginning.\n2.Insert An Element at End.\n3.Insert An Element Inbetween.\n4.Delete an Element from Beginning.\n5.Delete an Element from End.\n6.Delete an Element Inbetween.\n7.Reverse the List.\n8.Size of the List.\n9.Display Linked List.\n10.Exit\n";
		cout<<"\nPlease select your choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				int ele;
				cout<<"Enter Element: ";
				cin>>ele;
				if(ill.AddAtBegin(ele))
				{
					cout<<"\nElement Inserted at beginning!"<<endl;
				}else
				{
					cout<<"\nElement could not be Inserted at beginning!"<<endl;
				}
			}break;
			
			case 2:
			{
				int ele;
				cout<<"Enter Element: ";
				cin>>ele;
				if(ill.AddAtEnd(ele))
				{
					cout<<"\nElement Inserted at beginning!"<<endl;
				}else
				{
					cout<<"\nElement could not be Inserted at beginning!"<<endl;
				}
			}break;
		
		
		}
	}while(choice != 10);*/
	
	
	return 0;
}
