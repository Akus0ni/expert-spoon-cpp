#include"Complex.h"
#include"Child.h"

class Child2: public Complex
{
	int real1;
	int img1;
public:
	Child2();
	void Accept();
	void Display() const;
	void Subst(const Child &ch);
	Child2 Subst();
	~Child2();
	
};