#include"MyArray.cpp"		//implicit Instanciation of template

int main()
{
	/*
	MyArray<int> a;
	MyArray<char> b(2);
		
	a.setAt(0,10);
	b.setAt(0,'A');
	b.setAt(1,'B');
	b.At(2)='C';
	{
		MyArray<char> c=b;	//Shallow Copy w/o Copy CTOR(dangling pointer problem as b will not be able 
						//to access the memory after c has freed(at end of this scope) the dynamic memory)...
						//User has to define a Copy CTOR.
		cout<<endl<<"c[0]: "<<c.At(0);
	}	
	cout<<"\na: "<<a.getAt(0)<<endl<<"b[0]: "<<b.getAt(0)<<endl<<"b[1]: "<<b.At(1)<<"\nb[2]: "<<b.At(2)<<endl;

	*/

	MyArray<int> d(2);
	d[0]=10;
	d[1]=20;
	MyArray<int> e;
	e=d;

	MyArray<int> f(3);
	MyArray<int> g(2);
	f[0]=11;
	f[1]=22;
	f[2]=33;
	g[0]=1;
	g[1]=3;
	if(e==d)
	{
		cout<<"e==d\n";
	}
	else
		cout<<"e!=d";

	if(e==f)
	{
		cout<<"e==f\n";
	}
	else
		cout<<"e!=f";

	if(g==d)
	{
		cout<<"g==d\n";
	}
	else
		cout<<"g!=d";
	return 0;
}
