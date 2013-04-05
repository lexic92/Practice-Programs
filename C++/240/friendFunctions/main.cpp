#include <iostream>

using namespace std;

class Base
{
	//This actually works! So you can put the friend function declaration anywhere you want.
	public:
	friend void function1(Base b);

	protected:
	int b;
	friend void function2(Base b);

	private:
	int a;
	friend void function3(Base b);
};

void function1(Base b){ cout << b.a << endl << b.b << endl; }
void function2(Base b){ cout << b.a << endl << b.b << endl; }
void function3(Base b){ cout << b.a << endl << b.b << endl; }

int main()
{
	Base b;
	function1(b);
	function2(b);
	function3(b);

	return 0;
}
