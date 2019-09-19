#include<iostream>
#include"Time.h"
using namespace std;

int main()
{
	Time t1;
	Time t2(10,35,0);
	Time t3=t2;
	Time t4,t5;
	t4.Accept();
	t5.Accept();
	t4.CmpTime(t4,t5);
	t4.DiffTime(t4,t5);
	return 0;

}
