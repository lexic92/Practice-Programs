#include <iostream>
using namespace std;
class Base
{
	public:
	virtual void function()
	{
		cout << "Base \"virtual void function()\"" << endl;
	}
};
class Derived : public Base
{
	public:
	//NOTE: When you put "VIRTUAL" in front of this function, it doesn't make any difference!
	void function()
	{
		cout << "Derived \"virtual void function()\"" << endl;
	}
};
class Derived2 : public Derived
{
	public:
	virtual void function()
	{
		cout << "Derived2 \"virutal void function()\"" << endl;
	}
};
class PureClass
{
	public:
	virtual void stuff() =0;
};
class PureDerived :  public PureClass
{
	//void stuff(){}
};
int main()
{
	Base * b = new Derived2;
	b->function();
	
	Derived * d = new Derived2;
	d->function();
	
	Derived2 * d2 = new Derived2;
	d2->function();

	//PureClass p; //Can't do
	PureDerived p2;
	
	//The output was 3 times it called Derived2's function!!!!!!
	return 0;
}
	
