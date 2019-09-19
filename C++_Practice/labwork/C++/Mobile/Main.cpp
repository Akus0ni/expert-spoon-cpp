#include"Mobile.h"
using namespace std;
int main()
{
	Mobile *mob=new Mobile[3];
	int mn,q;
	Mobile m1;
	int c,count=0;
	do
	{
		cout<<"\nPlease Select any one: \n1.Add Mobile\n2.Display\n3.Quantity\n4.Availability\n5.Exit";
		cin>>c;
		cout<<"\n";
		switch(c)
		{
			case 1:
				count=mob[0].GetCount();
				cout<<count<<endl;
				if(count==0){
					mob[0].Accept();
					break;
				}
				else
				{
					mob[count].Accept();
					break;
				}
			case 2:
				count=mob[0].GetCount();
				if(count>0)
				{
					for(int i=0;i<count;i++)
					{
						mob[i].Display();
					}
					break;
				}
				else
				{
					cout<<"No Items Found..";
					break;
				}
			case 3:
				cout<<"\nEnter Model No= ";
				cin>>mn;
				q=m1.Search(mob,mn);
				if(q>=0)
				{
					cout<<"\nQuantity for "<<mn<<" is "<<q<<endl;
				}
				else
				{
					cout<<"\nModel Not FOund..\n";
				}
				break;
			case 4:
				cout<<"\nEnter Model No= ";
				cin>>mn;
				q=m1.Search(mob,mn);
				if(q>0)
				{
					cout<<"\nQuantity for "<<mn<<" is "<<q<<". Hence Available "<<endl;
				}
				else if(q==0)
				{
					cout<<"Not quantities available for "<<mn<<endl;
				}
				else
				{
					cout<<"Model Not found...";
				}
				break;
			case 5:
				cout<<"Thanks for visiting!!";
				break;
			default:
				cout<<"Enter valid selection"<<endl;
				break;
		}	
	}while(c!=5);
	return 0;        
}
