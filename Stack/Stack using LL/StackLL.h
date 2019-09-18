#include"DLinkedList.h"

template<class T>
class StackLL
{
    DLinkedList<T> dlls;
    public:
    StackLL();

    bool IsEmpty();
    bool Push(T ele);
    T Pop();

    void Display();

    ~StackLL(); 
};