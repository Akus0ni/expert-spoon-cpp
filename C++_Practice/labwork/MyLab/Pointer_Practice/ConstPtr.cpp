#include<iostream>
using namespace std;

int main()
{
	int b=30;
	const int a=10;		//const value
/******************************************************
	int *p=&a;		//int ptr
	cout<<*p;		//will generate error lvalue error as int* is not equal to const int value
*******************************************************/
	
/******************************************************
	const int* p = &a;	//Fancy/Flexi pointer
	cout<<*p<<endl;
	p=&b;
	*p=24;		//Not allowed..Value can't be changed but address can.
	cout<<*p<<endl;
*******************************************************/

/******************************************************
/*	int* const p = &b;	//flexi value... constant pointer
	//p=&a;			//Not allowed..Pointer cant be changed.
	cout<<*p<<endl;
	*p=44;			//But value can change pointed by the pointer
	cout<<*p<<endl;
*/
	
/******************************************************
	Array name is a constant pointer internally.
	Same applies to function name as well.
*******************************************************/

/******************************************************/
	const int* const p = &a;	//Constant pointer to const int...MAde for each other.
	cout<<*p<<endl;
	//p=&b;				//Not allowed...Pointer cannot be changed.
	//*p=37;				//Not allowed...Value pointed by pointer cant be changed as well.
/*******************************************************/
}
