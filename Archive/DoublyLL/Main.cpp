#include"DLinkedList.cpp"
#include<iomanip>
#include <string>
#include <cstdlib>
#include<thread>			//using sleep_for
#include<chrono>

int main(int argc, char const *argv[])
{
	DLinkedList<string> dll;
	int choice;

	do
	{
		system("clear");
		cout<<endl<<setw(75)<<"%%%%%%%%%%%%%%%%%%%%%%``Menu``%%%%%%%%%%%%%%%%%%%%%%"<<endl;
		cout<<"\n1. Add Item at the beginning.";
		cout<<"\n2. Add Item at the end.";
		cout<<"\n3. Add Item InBetween.";
		cout<<"\n4. Delete Item from Begin.";
		cout<<"\n5. Delete Item from End.";
		cout<<"\n6. Delete Item from InBetween.";
		cout<<"\n7. Print Reverse of The Items List.";
		cout<<"\n8. Size of the List.";
		cout<<"\n9. Display the list.\n";
		cout<<"10. Exit\n";
		cout<<"\nEnter Your Choice: ";
		cin>>choice;

		switch(choice)
		{
			case 1:
			{
				string str;
				cin.ignore(1);
				cout<<"\nEnter a Name to begin with: ";
				getline(cin,str);
				if (dll.AddAtBegin(str))
				{
					cout<<"\nName added to the list at beginning!\n";
				}else{
					cout<<"\nName could not be added.\n";
				}
				/*cout<<flush;
				this_thread::sleep_for(chrono::milliseconds(1000));*/
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;

			case 2:
			{
				string str;
				cin.ignore(1);
				cout<<"\nEnter a Name to end with: ";
				getline(cin,str);
				if (dll.AddAtEnd(str))
				{
					cout<<"\nName added to the list at the end!\n";
				}else{
					cout<<"\nName could not be added.\n";
				}
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;

			case 3:
			{
				string str;
				int position;
				int size = dll.GetSize();
				cout<<"\nEnter position (from 0 to "<<size+1<<") in which the name is to be added = ";
				cin>>position;
				cin.ignore(1);
				cout<<"\nEnter a Name for this position: ";
				getline(cin,str);
				try{
					if (dll.AddInBetween(str,position))
					{
						cout<<"\nName added to the list at the end!\n";
					}else{
						cout<<"\nName could not be added.\n";
					}
				}catch(runtime_error e)
				{
					cout<<e.what()<<endl;
				}
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;

			case 4:
			{
				string str;
				try{
					str = dll.DelFromBegin();
					cout<<endl<<str<<" Deleted from Begin."<<endl;
					cin.ignore(1);
				}catch(runtime_error e)
				{
					cout<<endl<<e.what()<<endl;
					cin.ignore(1);
				}
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;

			case 5:
			{
				string str;
				try{
					str = dll.DelFromEnd();
					cout<<endl<<str<<" Deleted from End."<<endl;
					cin.ignore(1);
				}catch(runtime_error e)
				{
					cout<<endl<<e.what()<<endl;
					cin.ignore(1);
				}
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;

			case 6:
			{
				string str;
				int position;
				int size = dll.GetSize();
				cout<<"\nEnter position (from 1 to "<<size<<") from which the name is to be deleted = ";
				cin>>position;
				try{
					str = dll.DelInBetween(position);
					cout<<str<<" Removed from List!"<<endl;
					cin.ignore(1);
				}catch(runtime_error e)
				{
					cout<<e.what()<<endl;
					cin.ignore(1);
				}
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;

			case 7:
			{
				cout<<"\n==========Display Reversal==========="<<endl;
				dll.PrintReverseDLL();
				cin.ignore(1);
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;

			case 8:
			{
				cout<<"Size of List : "<<dll.GetSize()<<endl;
				cin.ignore(1);
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;

			case 9:
			{
				cout<<"\n==========Display List==========="<<endl;
				dll.Display();
				cin.ignore(1);
				cout<<"\nPress Enter to continue:"<<endl;
				cin.ignore(1);
			}break;

			case 10:
			{
				cout<<"****************Thanks For Using This App!*****************"<<endl;
				cout<<flush;
				this_thread::sleep_for(chrono::milliseconds(2000));
				system("clear");
			}break;

			default:
			{
				cout<<"\nIncorrect Choice! Please Enter correctly!"<<endl;
				cin.ignore(1);
				cout<<"\nPress Enter to continue:\n";
				cin.ignore(1);
			}break;	
		}
	} while (choice!=10);
	return 0;
}
