#include <iostream>

using namespace std;
/*class friendClass1;
class friendClass2;
class friendClass3;*/
class Base
{
	//This actually works! So you can put the friend function declaration anywhere you want.
	public:
	friend void function1(Base b);
	//friend friendClass 1;  //This does not work, even if you forward-declare a class. It must have the keyword "friend."
	friend class friendClass1;

	protected:
	int b;
	friend void function2(Base b);
	friend class friendClass2;

	private:
	int a;
	friend void function3(Base b);
	friend class friendClass3;
};
class friendClass1
{
};
class friendClass2
{
};
class friendClass3
{
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
