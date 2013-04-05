#include <iostream>

using namespace std;

class Base
{
	public:

	virtual ~Base()
	{ 
		cout << "base destroyed" << endl; 
	}
	void nonVirtual()
	{
		cout << "base nonvirtual" << endl;
	}
	virtual void virtualFunction(int a)
	{
		cout << "base virtual" << endl;
	}
};
class Derived : public Base
{
	public:
	~Derived()
	{
		cout << "derived destroyed" << endl;
	}
	void virtualFunction()
	{
		cout << "derived virtual" << endl;
	}
	void nonVirtual()
	{
		cout << "derived nonvirtual" << endl;
	}
};
class Random
{
};
class Derived2 : public Derived
{
	public:
	void virtualFunction(int  a) //(int & a) is indeed different from (int a).
	//Why is that? I thought it only changed the way it was interpreted?
	//If I leave &, it calls base virtual.  If I take it off, it calls derived2 virtual.
	{
		cout << "derived2 virtual" << a << endl;
	}
};
int main()
{
	Random * p_Random = new Random;
	Derived2 * p_Derived2 = new Derived2;
	cout << "p_random: " << p_Random << endl;
	cout << "p_Derived2" << p_Derived2 << endl;
	//cout << (p_Random = p_Derived2) << endl;  ERROR: cannot convert p_Random* to p_Derived2 in assignment.
	Derived * p_Derived = new Derived;
	p_Derived = p_Derived2;
	// p_Derived2 = p_Derived; //Cannot do this.
	Base * p_Base = p_Derived;
	p_Base = p_Derived2;
	//p_Derived = p_Base; //Can't do this.
	//p_Derived2 = p_Base; //Can't do this.


	int a = 1;

	Base * b = new Base;
	b->nonVirtual();  //called base nonvirtual
	b->virtualFunction(1); //called base virtual
	
	Derived * d = new Derived;
	d->nonVirtual(); //called derived nonvirtual
	//d->virtualFunction(1);


	

	Base * c = new Derived;
	c->nonVirtual();  //called base nonvirtual
	c->virtualFunction(1); //called base virtual
	
	
	Base * d2 = new Derived2; 
	int myInt1 = 1;
	int& myInt = myInt1;
	d2->virtualFunction(myInt); //called derived2 virtual1

	//delete b;
	//delete d;
	return 0;
}
