#include<iostream>
#include<cstring>
using namespace std;

template<class T>
class Graph
{
	T V;	//no of vertices
	T *adj;
public:
	Graph();
	Graph(T V);
	~Graph();

	void InsertAdjacentEdges(T index);
	void Display();
};