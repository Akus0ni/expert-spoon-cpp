#include"Stack.h"

int main()
{
	Stack<int> st;
	int ch,data,size,stNo;
	do{
		cout<<"\n-----------------------Welcome TO C2-Stack--------------------"<<endl;
		cout<<"1.Push\n2.Pop\n3.Peep\n4.Empty Stack\n5.Exit"<<endl;
		cout<<"Enter ur Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				cout<<"\nWhich Stack u wanna use(1 or 2) to Push: ";
				cin>>stNo;
				cout<<"\nEnter Element to Push onto Stack: ";
				cin>>data;
				try{
					st.push(data,stNo);
				}
				catch(runtime_error e)
				{
					cout<<e.what()<<endl;
				}
			}	break;
			case 2:
			{
				cout<<"\nWhich Stack u wanna use(1 or 2) to Pop: ";
				cin>>stNo;
				try{
					data = st.pop(stNo);
					cout<<"\nPopped Data = "<<data<<endl;
				}
				catch(runtime_error e){
					cout<<e.what()<<endl;
				}
			}	break;
			case 3:
			{
				cout<<"\nWhich Stack u wanna use(1 or 2) to see the top element of: ";
				cin>>stNo;
				try{
					data = st.peep(stNo);
					cout<<"\nElement at Top = "<<data<<endl;
				}
				catch(runtime_error e){
					cout<<e.what()<<endl;
				}
			}	break;
			case 4:
			{
				cout<<"\nWhich Stack u wanna Empty(1 or 2) : ";
				cin>>stNo;
				if(st.IsEmpty(stNo))
				{
					cout<<"\nStack is Already empty!"<<endl;
					break;
				}
				size = st.GetSize();
				for(int i=0;i<=size;i++)
				{
					try{
						data = st.pop(stNo);
						cout<<"Element Popped = "<<data<<endl;
					}
					catch(runtime_error e)
					{
						//cout<<e.what()<<endl;
						break;
					}
				}
				cout<<"Stack is now Empty!"<<endl;
			}	break;
			case 5:
				cout<<"\nThanks for using Stack!\nHope u liked the flow!"<<endl;
				break;
			default:
				cout<<"\nPlease Enter correctly!"<<endl;
				break;
		}
	}while(ch!=5);
	return 0;
}


