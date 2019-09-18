/*
 * Main.cpp
 *
 *  Created on: 15-Sep-2019
 *      Author: akashsoni
 */

#include"BST.cpp"

int main()
{
	BST<int> bt;
	int min,max,h;
	bt.Insert(8);
	bt.Insert(5);
	bt.Insert(3);
	bt.Insert(10);
	bt.Insert(15);
	bt.Insert(4);
	bt.Insert(9);
	BST<int>::InorderPrint(bt.GetRoot());
	cout<<"\n";
	BST<int>::PreorderPrint(bt.GetRoot());
	cout<<"\n";
	BST<int>::PostorderPrint(bt.GetRoot());
	cout<<"\n";
	
	if(bt.Search(10))
	{
		cout<<"Element 10 is present!"<<endl;
	}
	if(bt.Search(11))
	{
		cout<<"Element 11 is present!"<<endl;
	}else{
		cout<<"element 11 not present!"<<endl;
	}
	min = BST<int>::FindMin(bt.GetRoot());
	cout<<"Min= "<<min;
	cout<<"\n";
	max = BST<int>::FindMax(bt.GetRoot());
	cout<<"Max= "<<max;
	cout<<"\n";
	
	h = BST<int>::Height(bt.GetRoot());
	cout<<"Height= "<<h;
	cout<<"\n";
	
	bt.LevelOrderPrint();
	cout<<"\n";
	
	bt.NonRecurInorder();
	cout<<"\n";
	return 0;
}


