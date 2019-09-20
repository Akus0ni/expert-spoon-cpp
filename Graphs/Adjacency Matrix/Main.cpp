#include"Graph.cpp"

int main()
{
	Graph<int> g1[3];


	int a,b;
	cout<<"Enter two vertex to join from (1 to 3): ";
	cin>>a>>b;
	
	g1[a-1].InsertAdjacentEdges(b-1);
	g1[b-1].InsertAdjacentEdges(a-1);

	for(int i=0;i<3;i++)
	{
		g1[i].Display();
		cout<<"\n";
	}
}