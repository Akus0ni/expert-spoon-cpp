#include"LinkedList.cpp"
#include"Student.cpp"
//#include<string>
int main()
{
    LinkedList< Student<int,string> > ll;
    Student<int,string> st[2];
    ll.AddAtBegin(st[0]);
    ll.AddAtEnd(st[1]);
    ll.Display();
    ll.ReverseLL();
    Student<int,string> delSt;
    delSt = ll.DeleteAtBegin();
    ll.Display();
    return 0;
}