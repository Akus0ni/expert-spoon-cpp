/*
 * BST.h
 *
 *  Created on: 15-Sep-2019
 *      Author: akashsoni
 */

#ifndef BST_H_
#define BST_H_

#include"TreeNode.cpp"

template<class T>
class BST
{
	TreeNode<T> *root;
public:
	BST();
	~BST();
	bool IsEmpty();
	void Insert(T data);
	static void InorderPrint(TreeNode<T>* temp);
	static void PreorderPrint(TreeNode<T>* temp);
	static void PostorderPrint(TreeNode<T>* temp);
	void LevelOrderPrint();

	void NonRecurInorder();

	TreeNode<T>* GetRoot();
	
	static void Delete(TreeNode<T>* temp);
	bool Search(T ele);
	static T FindMin(TreeNode<T>* t);
	static T FindMax(TreeNode<T>* t);
	
	static int Height(TreeNode<T>* temp);
	
	
};



#endif /* BST_H_ */
