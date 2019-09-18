/*
 * BST.cpp
 *
 *  Created on: 15-Sep-2019
 *      Author: akashsoni
 */
#include"BST.h"
#include<queue>
#include<stack>

template<class T>
BST<T>::BST():root(nullptr)
{

}

template<class T>
BST<T>::~BST()
{
	Delete(root);
}

template<class T>
bool BST<T>::IsEmpty()
{
	return (root==nullptr);
}

template<class T>
void BST<T>::Insert(T data)
{
	TreeNode<T>* temp = new TreeNode<T>();
	temp->setData(data);
	if(IsEmpty())
	{
		root = temp;
		return;
	}
	else
	{
		TreeNode<T>* current = root;
		while(current != nullptr)
		{
			if(current->getData() == data)
			{
				throw runtime_error("Same Data cannot be entered!");
			}
			if(current->getData() > data)	//Left Child
			{
				if(current->getLChild() == nullptr)
				{
					current->setLChild(temp);
					return;
				}
				else{
					current = current->getLChild();		//self shifter
				}
			}
			if(current->getData() < data)   //Right Child
			{
				if(current->getRChild() == nullptr)
				{
					current->setRChild(temp);
					return;
				}
				else{
					current = current->getRChild();		//self shifter
				}
			}
		}
	}
}


template<class T>
void BST<T>::InorderPrint(TreeNode<T>* temp)
{
	if(temp!=nullptr)
	{
		InorderPrint(temp->getLChild());
		cout<<temp->getData()<<"  ";
		InorderPrint(temp->getRChild());
	}
}

template<class T>
void BST<T>::PreorderPrint(TreeNode<T>* temp)
{
	if(temp!=nullptr)
	{
		cout<<temp->getData()<<"  ";
		PreorderPrint(temp->getLChild());
		PreorderPrint(temp->getRChild());
	}
}

template<class T>
void BST<T>::PostorderPrint(TreeNode<T>* temp)
{
	if(temp!=nullptr)
	{
		PostorderPrint(temp->getLChild());
		PostorderPrint(temp->getRChild());
		cout<<temp->getData()<<"  ";
	}
}

template<class T>
TreeNode<T>* BST<T>::GetRoot()
{
	return root;
}



template<class T>
void BST<T>::Delete(TreeNode<T>* temp)
{
	if(temp!=nullptr)
	{
		Delete(temp->getLChild());
		Delete(temp->getRChild());
		delete temp;
	}
}

template<class T>
bool BST<T>::Search(T ele)
{
	TreeNode<T>* t = root;
	while(t!=nullptr)
	{
		if(t->getData() == ele)
		{
			return true;
		}
		else if(t->getData() > ele)
		{
			t = t->getLChild();
		}
		else{
			t = t->getRChild();
		}
	}
	return false;
}

template<class T>
T BST<T>::FindMin(TreeNode<T>* t)
{
	if(t->getLChild() == nullptr || t == nullptr)
		return t->getData();
	else{
		FindMin(t->getLChild());
	}
}
template<class T>
T BST<T>::FindMax(TreeNode<T>* t)
{
	if(t->getRChild() == nullptr || t == nullptr)
		return t->getData();
	else{
		FindMax(t->getRChild());
	}
}

template<class T>
int BST<T>::Height(TreeNode<T>* temp)
{
	int l = 0;
	int r = 0;
	
	if(temp==nullptr)
		return 0;
	
	l = Height(temp->getLChild());
	r = Height(temp->getRChild());
	
	if(l >= r)
		return l+1;
	else
		return r+1;			//😁️
	
}


template<class T>
void BST<T>::LevelOrderPrint()
{
	queue<TreeNode<T>*> que;
	TreeNode<T>* curr = root;
	while(curr){
		cout<<curr->getData()<<"\t";
		if(curr->getLChild())	que.push(curr->getLChild());
		if(curr->getRChild())	que.push(curr->getRChild());
		if(que.empty())	return;
		curr = que.front();
		que.pop();
	}
}

template<class T>
void BST<T>::NonRecurInorder()
{
	stack<TreeNode<T>*> s;
	TreeNode<T>* curr = root;
	while(!s.empty() || curr != nullptr)
	{
		while(curr != nullptr)
		{
			s.push(curr);
			curr = curr->getLChild();
		}
		curr = s.top();
		s.pop();
		cout<<curr->getData()<<"\t";
		curr = curr->getRChild();
	}
}
















