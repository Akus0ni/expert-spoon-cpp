#include<iostream>
#include<string>
using namespace std;

template<class T>
class Node
{
	T data;
	Node<T>* next;
	Node<T>* prev;
public:
	Node();
	~Node(); 

	void SetData(T ele);
	T GetData();

	void SetNext(Node<T>* nxt);
	Node<T>* GetNext();

	void SetPrev(Node<T>* pre);
	Node<T>* GetPrev();
	
};