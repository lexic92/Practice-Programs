#include <iostream>
using namespace std;

class A
{
public:
	virtual void function()
	{
		cout << "function" << endl;
	}
	virtual void funtion2();
	
};

class B : A
{
	public:
	void function2()
	{
		cout << "classB function2" << endl;
	}
};

int main()
{
	A * a = new B;
	a->function2();

	A * other = new A;
	other->function2();

}
