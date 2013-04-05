#include <iostream>

using namespace std;


class base
{
	public:
	base()
	{
		cout << "constructing base plain" << endl;
	}
	int a;
	base(int a)
	{
		this->a = a;
		cout << "Constructing base" << endl;
	}

};

class derived : private base
{
	public:
	derived()
	{
		cout << "constructing derived plain" << endl;
	}
	derived(int a) : base(a) //If I coment out ": base(a)", it changes the order! How does it know????
	//ANSWER: It checks to see if you specified a SPECIFIC base constructor in this initializer list, and if so, uses that constructor specially; and if not, it will attempt to call base() (Which does not exist automatically if you have ANY OTHER CONSTRUCTOR DEFINED WHATSOEVER.).
	//To see the problem, comment out the constructor "base()".
	{
		cout << "construting derived" << endl;
	}
	
};

int main()
{
	derived d(1);
}
