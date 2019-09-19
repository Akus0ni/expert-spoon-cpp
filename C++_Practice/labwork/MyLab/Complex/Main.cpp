#include"Child.h"
#include"Child2.h"
#include<fstream>

int main()
{
	Child a;
	a.Accept();
	Child b = a.Add();

	Child2 c;
	c.Accept();
	Child2 d = c.Subst();
	c.Subst(a);

	Child e;
	cin>>e;																//overloaded operator >>

	cout<<"\nAfter Addition of Child 1------"<<endl;
	b.Display();
	cout<<"\nAfter Substraction of Child 2 from Complex------"<<endl;
	d.Display();
	cout<<"\nAfter Substraction of Child 1 from Complex------"<<endl;
	c.Display();


	cout<<"\nAfter using Overloaded operators (>> & <<)------"<<endl;
	cout<<e;															//overloaded operator <<

	/*ofstream fout("abc.txt");
	if(!fout)
	{
		cout<<"\n File Not found"<<endl;
		return -1;
	}

	Child *ch=new Child[3];
	Child2 *ch2 = new Child2[3];

    for(int i=0;i<3;i++)
    {
        ch[i].Accept();
        ch[i] = ch[i].Add();
        ch2[i].Accept();
        ch2[i] = ch2[i].Subst();
    }
	fout.write((char*)&ch, sizeof(Child));
	fout.write((char*)&ch2, sizeof(Child2));



	fout.close();


	ifstream fin("abc.txt",ios::in);
	if(!fout)
	{
		cout<<"unable to open file"<<endl;
		return -1;
	}

	while(fin.read((char*)&ch, sizeof(Child)) && fin.read((char*)&ch2, sizeof(Child2)))
	{
	    for(int i=0;i<3;i++)
        {
          ch[i].Display();
          ch2[i].Display();
        }

	}
	fin.close();*/

	return 0;


}









