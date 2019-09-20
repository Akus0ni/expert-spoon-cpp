#include"Graph.h"

	template<class T>
	Graph<T>::Graph()
	{
		V = 3;
		adj = new T[V];
		memset(adj,0,V*sizeof(adj[0]));
	}

	template<class T>
	Graph<T>::Graph(T Vert):V(Vert),adj(new T[V])
	{
		memset(adj,0,V*sizeof(adj[0]));
	}

	
	template<class T>
	Graph<T>::~Graph()
	{
		delete []adj;
	}

	template<class T>
	void Graph<T>::InsertAdjacentEdges(T index)
	{
		adj[index] = 1;
	}

	template<class T>
	void Graph<T>::Display()
	{
		for(int i=0;i<V;i++)
		{
			cout<<adj[i]<<"  ";
		}
	}