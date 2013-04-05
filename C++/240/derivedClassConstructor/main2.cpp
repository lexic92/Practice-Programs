#include <iostream>

using namespace std;


class base
{
	
	public:
	int a;
	base() : a(1)
	{
		cout << "constructing base plain" << b << endl;
	}
	
};
class derived : private base
{
	public:
	int a;
	//int a;  //But the compiler won't let you have double in the same class.
	derived() : a(2)
	{
		cout << "constructing derived plain" << endl;
	}
};

int main()
{
	derived d; 

	//What will happen to int a? Will it be assigned more than once? Is this ambiguous for the compiler????
	//ANSWER: No. There's only one int a.  And, since it constructs the derived class second in this case, then the last value that a is assigned happens to be "2".
	

	cout << d.a << "hi" << endl;
}

//OUTPUT:
	//constructing base plain
	//constructing derived plain
	//2hi

