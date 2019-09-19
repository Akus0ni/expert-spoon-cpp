#include<fstream>
#include<string>
#include<iomanip>
#include"Player.h"

int main()
{
	Player p[3];
	string fName;
	char ch;
	int count=1,cc=1;
	cout<<"\nEnter File Name: ";
	getline(cin,fName);
	//cin.ignore(1);
	fstream file;
	file.open(fName,ios::out|ios::binary);
	if (!file)
	{
		cout<<"Error in creating file"<<endl;
		return -1;
	}

	do
	{

		cout<<"\nEnter Player "<<count<<" Details---"<<endl;
		if(count!=1)	cin.ignore(1);
		for (int i = 0; i < 3; ++i)
		{
			p[i].Accept();

		}
		SortPlayer(p,3);
		for (int i = 0; i < 3; ++i)
		{
			file.write((char*)&p[i],sizeof(Player));
		}
		count++;
		cout<<"\n\nDo you wish to enter more:(y/n)? ";
        cin>>ch;
	}while(ch!='n');
	file.close();

	file.open(fName,ios::in|ios::binary);
    if(!file){
    	cout<<"Error in creating file...\n";
		return -1;
    }

    cout<<setw(50)<<"\n----------Player Details------------"<<endl;
    while(cc!=count)
    {
    	//cout<<"\nPlayer "<cc<<" Details------"<<endl;
    	for (int i = 0; i < 3; ++i)
    	{
    		file.read((char*)&p[i],sizeof(Player));
    	}
    	//cout<<"\nPlayer "<cc<<" Details------";

    	for (int i = 0; i < 3; ++i)
    	{
    		p[i].Display();
    	}
    	cc++;
    }
    file.close();
    cout<<"\n\n============End of Program============\n\n";
	return 0;
}





