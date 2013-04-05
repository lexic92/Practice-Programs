#include <iostream>

using namespace std;

class Base
{
	public:

	virtual void virtualFunction(int a)
	{
		cout << "base virtual" << endl;
	}
};
class Derived : public Base
{
	public:
	void virtualFunction(int & a) 
	//(int & a) is indeed different from (int a).
	//Why is that? I thought it only changed the way it was interpreted?
	//If I leave &, it calls base virtual.  If I take it off, it calls derived2 virtual.
	{
		cout << "derived virtual" << endl;
	}
};

int main()
{
	
	Base * d2 = new Derived; 

	//int myInt1 = 1;
	//int& myInt = myInt1;
	
	//d2->Derived::virtualFunction(1); didn't work.

	d2->virtualFunction(1); //called derived2 virtual1

	return 0;
}
