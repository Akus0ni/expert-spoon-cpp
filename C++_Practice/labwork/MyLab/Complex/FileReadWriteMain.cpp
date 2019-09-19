#include"Child.h"
#include"Child2.h"
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	Child a;
	Child2 b;
	char ch;
	string fName;
	//ofstream fout("abc.txt");
	cout<<"Enter File Name: ";
	getline(cin,fName);
	fstream file;
	file.open(fName,ios::out|ios::binary);
	if(!file){
		cout<<"Error in creating file...\n";
		return -1;
	}
	do{
		cout<<"\n"<<setw(35);
		cout<<"Enter Complex Num One-----"<<endl;
		a.Accept();
		a = a.Add();
		cout<<"\n"<<setw(35);
		cout<<"Enter Complex Num Two-----"<<endl;
		b.Accept();
		b = b.Subst(); 
		/*fout.write((char*)(&a),sizeof(Child));
		fout.write((char*)(&b),sizeof(Child2));*/
		file.write((char*)&a,sizeof(Child));
		file.write((char*)&b,sizeof(Child2));
        cout<<"\n\nDo you wish to enter more:(y/n)? ";
        cin>>ch;
	}while(ch!='n');

	
	//fout.close();
	file.close();

    //ifstream fin("abc.txt");
    file.open(fName,ios::in|ios::binary);
    if(!file){
    	cout<<"Error in creating file...\n";
		return -1;
    }

    int i=1;
    while(file.read((char*)(&a),sizeof(Child)) && file.read((char*)(&b),sizeof(Child2)))
    {
          cout<<"\n\n"<<setw(36);
          cout<<"Complex Num "<<i<<" Display-----"<<endl;
          cout<<"Complex No A"<<i<<": "<<endl;
          a.Display();
          cout<<"\nComplex No B"<<i<<": "<<endl;
          b.Display();
          i++;
    }
    //fin.close();
    file.close();

    cout<<"\n\n============End of Program============\n\n";

	return 0;
}