#include"Queue.h"
int main()
{
	Queue<int> st;
	int ch,data,size;
	do{
		cout<<"\n-----------------------Welcome TO Queue--------------------"<<endl;
		cout<<"1.Add data to Queue \n2.Delete data from Queue \n3.Empty Queue\n4.Exit"<<endl;
		cout<<"Enter ur Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter Element to Add into Queue: ";
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
					cout<<"\nQueue is Already empty!"<<endl;
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
				cout<<"Queue is now Empty!"<<endl;
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







