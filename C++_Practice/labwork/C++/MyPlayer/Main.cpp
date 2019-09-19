#include<iostream>
#include"MyPlayer.h"
using namespace std;

int main()
{
	MyPlayer *mp=new MyPlayer[3];
	for(int i=0;i<3;i++)
	{
		mp[i].Accept();
	}
	pSort(mp);
	cout<<"After Sorting...\n";
	for(int i=0;i<3;i++)
	{
		mp[i].Display();
	}
	delete []mp;
	return 0;
}

