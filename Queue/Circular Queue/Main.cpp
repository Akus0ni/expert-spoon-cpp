#include"CQueue.h"
int main()
{
	CQueue<char> st;
	int ch,size;
	char data;
	do{
		cout<<"\n-----------------------Welcome TO Circular-Queue--------------------"<<endl;
		cout<<"1.Add data to C-Queue \n2.Delete data from C-Queue \n3.Empty C-Queue\n4.Exit"<<endl;
		cout<<"Enter ur Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter Element to Add into C-Queue: ";
				cin>>data;
				try{
					st.AddQ(data);
				}
				catch(runtime_error e)
				{
					cout<<e.what()<<endl;
				}
				break;
			case 2:
				try{
					data = st.DelQ();
					cout<<"\nDeQueued Element = "<<data<<endl;
				}
				catch(runtime_error e){
					cout<<e.what()<<endl;
				}
				break;
			case 3:
				if(st.IsEmpty())
				{
					cout<<"\nC-Queue is Already empty!"<<endl;
					break;
				}
				size = st.GetSize();
				for(int i=0;i<=size;i++)
				{
					try{
						data = st.DelQ();
						cout<<"Element DeQueued = "<<data<<endl;
					}
					catch(runtime_error e)
					{
						//cout<<e.what()<<endl;
						break;
					}
				}
				cout<<"C-Queue is now Empty!"<<endl;
				break;
			
			case 4:
				cout<<"\nThanks for using Queue!\nHope u like to wait!"<<endl;
				break;
			default:
				cout<<"\nPlease Enter correctly!"<<endl;
				break;
		}
	}while(ch!=4);
	return 0;
}







