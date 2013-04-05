#include <iostream>

using namespace std;

class myClass
{
	public:
	myClass()
	{
		cout << this << endl;
		//this += 10;  Not allowed. Compiler apparently says it's not an "lvalue".
		cout << this << endl;
	}
};
int main()
{

	// cout << this << endl;  //Invalid.
	myClass a;
	
}
