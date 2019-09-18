/*
 * TreeNode.cpp
 *
 *  Created on: 15-Sep-2019
 *      Author: akashsoni
 */

#include"TreeNode.h"

template<class T>
T TreeNode<T>::getData() const {
	return data;
}

template<class T>
void TreeNode<T>::setData(T data) {
	this->data = data;
}

template<class T>
TreeNode<T>*& TreeNode<T>::getLChild() {
	return LeftNode;
}

template<class T>
void TreeNode<T>::setLChild(TreeNode<T> *&left) {
	LeftNode = left;
}

template<class T>
TreeNode<T>*& TreeNode<T>::getRChild() {
	return RightNode;
}

template<class T>
void TreeNode<T>::setRChild(TreeNode<T> *&right) {
	RightNode = right;
}

	template<class T>
	TreeNode<T>::TreeNode():LeftNode(nullptr),RightNode(nullptr)
	{}

	template<class T>
	TreeNode<T>::~TreeNode()
	{}



