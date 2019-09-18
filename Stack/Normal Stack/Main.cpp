//#include"Stack.h"
#include"Stack.cpp"

int main()
{
	Stack<int> st;
	Stack<int> st1(64);
	Stack<int> st2(64);
	int ch,data,top;
	do{
		cout<<"\n-----------------------Welcome TO Stack--------------------"<<endl;
		cout<<"1.Push\n2.Pop\n3.Peep\n4.Empty Stack\n5.Coversion of Decimal to Binary\n6.Conversion of Decimal to Octal\n7.Exit"<<endl;
		cout<<"Enter ur Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter Element to Push onto Stack: ";
				cin>>data;
				try{
					st.push(data);
				}
				catch(runtime_error e)
				{
					cout<<e.what()<<endl;
				}
				break;
			case 2:
				try{
					data = st.pop();
					cout<<"\nPopped Data = "<<data<<endl;
				}
				catch(runtime_error e){
					cout<<e.what()<<endl;
				}
				break;
			case 3:
				try{
					data = st.peep();
					cout<<"\nElement at Top = "<<data<<endl;
				}
				catch(runtime_error e){
					cout<<e.what()<<endl;
				}
				break;
			case 4:
				if(st.IsEmpty())
				{
					cout<<"\nStack is Already empty!"<<endl;
					break;
				}
				top = st.GetTop();
				for(int i=0;i<=top;i++)
				{
					try{
						data = st.pop();
						cout<<"Element Popped = "<<data<<endl;
					}
					catch(runtime_error e)
					{
						cout<<e.what()<<endl;
					}
				}
				cout<<"Stack is now Empty!"<<endl;
				break;
			case 5:
			{	
				int num=Convertbin(st1,2);
				cout<<"\nConversion of "<<num<<" into Binary is ";
				while(!st1.IsEmpty())
				{
					cout<<st1.pop();
				}
				cout<<endl;
				break;
			}
			case 6:
			{
				//Stack<int> st2(64);
				int num=Convertoct(st2,8);
				cout<<"\nConversion of "<<num<<" into Octal is ";
				while(!st2.IsEmpty())
				{
					cout<<st2.pop();
				}
				cout<<endl;
				break;
			}
			case 7:
				cout<<"\nThanks for using Stack!\nHope u liked the flow!"<<endl;
				break;
			default:
				cout<<"\nPlease Enter correctly!"<<endl;
				break;
		}
	}while(ch!=7);
	return 0;
}







