#include"Stack.h"
template <class T>
Stack<T>::Stack():size(5),top(-1)//,p(new int[size])
{
	p = new T[size];
	cout<<"\nCTOR "<<endl;
}

template <class T>
Stack<T>::Stack(int s):size(s),top(-1)//,p(new int[size])
{
        p = new T[size];
        cout<<"\nCTOR "<<endl;
}

template <class T>
bool Stack<T>::IsEmpty()
{
	return (-1==top);
}

template <class T>
bool Stack<T>::IsFull()
{
	return (size-1==top);
}

template <class T>
T Stack<T>::peep()
{
	if(IsEmpty())
	{
		throw runtime_error("\nStack Underflow!!");
	}
	return p[top];
}


template <class T>
T Stack<T>::pop()
{
	if(IsEmpty())
        {
                throw runtime_error("\nStack Underflow!!");
        }
        return p[top--];
}


template <class T>
void Stack<T>::push(T data)
{
	if(IsFull())
	{
		throw runtime_error("\nStack OverFlow!!");
	}
	p[++top]=data;
}


template <class T>
int Stack<T>::GetTop()
{
	return top;
}


template <class T>
Stack<T>::~Stack()
{
	cout<<"\nStack is Destroyed!"<<endl;
	delete []p;
}

template <class T>
int Convertbin(Stack<T> &sta,int d)
{
	int data,mod=0,num;
	cout<<"\nEnter a decimal num: "<<endl;
        cin>>data;
        num = data;
        while(data!=1)
        {
                mod = data%d;
                try{
                	sta.push(mod);
                }
                catch(runtime_error e)
                {
                	cout<<e.what()<<endl;
                }
                data = data/d;
        }
        try{
        	sta.push(data);
        }
        catch(runtime_error e)
        {
        	cout<<e.what()<<endl;
        }
        return num;

}

template <class T>
int Convertoct(Stack<T> &sta,int d)
{
	int data,mod=0,num;
	cout<<"\nEnter a decimal num: "<<endl;
        cin>>data;
        num = data;
        while(!(data<8))
        {
                mod = data%d;
                try{
                	sta.push(mod);
                }
                catch(runtime_error e)
                {
                	cout<<e.what()<<endl;
                }
                data = data/d;
        }
        try{
        	sta.push(data);
        }
        catch(runtime_error e)
        {
        	cout<<e.what()<<endl;
        }
        return num;

}










