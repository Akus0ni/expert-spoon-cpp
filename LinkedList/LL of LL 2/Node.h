#include<iostream>
#include<string>
using namespace std;

template<class T>
class Node
{
        private:
		T data;
		Node * next;	
	public:
        	Node();
		T GetData();
		Node* GetNext();
		void SetData(T data);
		void SetNext(Node * temp);
};
