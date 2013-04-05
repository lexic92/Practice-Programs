#include <iostream>

using namespace std;

class A
{
	private:
	void function(){ cout << "a" << endl;}
};
class B : public A
{
	public:
	void function(){ cout << "b" << endl;}
};


int main()
{
	A a;
	B b;
	b.function();

}
