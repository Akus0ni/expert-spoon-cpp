#include"StackLL.h"

    template<class T>
    StackLL<T>::StackLL()
    {

    }

    template<class T>
    bool StackLL<T>::IsEmpty()
    {
        return (dlls.IsEmpty());
    }

    template<class T>
    bool StackLL<T>::Push(T ele)
    {
        return (dlls.AddAtEnd(ele));
    }

    template<class T>
    T StackLL<T>::Pop()
    {
        return (dlls.DeleteAtEnd());
    }

    template<class T>
    void StackLL<T>::Display()
    {
        dlls.Display();
    }


    template<class T>
    StackLL<T>::~StackLL()
    {}

template class StackLL<int>;
template class StackLL<char>;