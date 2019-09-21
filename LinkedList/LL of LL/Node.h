
template<class T>
class Node
{
	T data;
	Node<T>* next;
   public:
   	Node();
   	T GetData();
   	Node<T>* GetNext();
   	void SetData(T temp);
   	void SetNext(Node<T>* n);
   	~Node();
};



