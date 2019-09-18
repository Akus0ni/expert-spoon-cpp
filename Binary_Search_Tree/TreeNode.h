/*
 * TreeNode.h
 *
 *  Created on: 15-Sep-2019
 *      Author: akashsoni
 */

#ifndef TREENODE_H_
#define TREENODE_H_

#include<iostream>
using namespace std;

template<class T>
class TreeNode
{
	T data;
	TreeNode<T> *LeftNode;
	TreeNode<T> *RightNode;
public:
	TreeNode();
	~TreeNode();
	T getData() const;
	void setData(T data);
	TreeNode<T>*& getLChild();
	void setLChild(TreeNode<T> *&left);
	TreeNode<T>*& getRChild();
	void setRChild(TreeNode<T> *&right);
};



#endif /* TREENODE_H_ */
