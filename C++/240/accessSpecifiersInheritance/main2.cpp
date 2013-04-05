#include <iostream>

using namespace std;

class A;
void function(A variable);

class A
{
	public:
	void function(){}
	int ApublicInt;
	A() : ApublicInt(0), AprivateInt(1), AprotectedInt(2)
	{
		cout << "A: " << ApublicInt << AprivateInt << AprotectedInt << endl;
	}
	private:
	int AprivateInt;
	void privateFunction(){}
	protected:
	int AprotectedInt;
	void protectedFunction(){}
};
class B : private A
{
	public:
	B()
	{
		/*privateFunction();*/
		protectedFunction();
		function();
		cout << "B: " << ApublicInt /*<< AprivateInt*/ << AprotectedInt << endl;
	}
};
class C : protected A
{
	public:
	C()
	{
		protectedFunction();
		/*privateFunction();*/
		function();
		cout << "C: " << ApublicInt /*<< AprivateInt*/ << AprotectedInt << endl;
	}
};
class D : public B
{
	public:
	D()
	{
		/*protectedFunction();*/
		/*privateFunction();*/
		/*function()*/
		cout << "D: " /*<< ApublicInt*/ /*<< AprivateInt*/ /*<< AprotectedInt*/ << endl;
	}
};
class E : public C
{
	public:
	E()
	{
		protectedFunction();
		/*privateFunction();*/
		function();
		cout << "E: " << ApublicInt /*<< AprivateInt*/ << AprotectedInt << endl;
	}
};
class F : public A
{
	public:
	F()
	{
		protectedFunction();
		/*privateFunction();*/
		function();
		cout << "F: " << ApublicInt /*<< AprivateInt*/ << AprotectedInt << endl;
	}
};
int main()
{
	cout << "-----A-----" << endl;
	A a;
	cout << "-----B-----" << endl;
	B b;
	cout << "-----C-----" << endl;
	C c;
	cout << "-----D-----" << endl;
	D d;
	cout << "-----E-----" << endl;
	E e;
	cout << "-----F-----" << endl;
	F f;

	cout << "Testing accessibility:" << endl;
	cout << "a: " << a.ApublicInt /*<< a.AprivateInt*/ /*<< a.AprotectedInt*/ << endl;
	cout << "b: " /*<< b.ApublicInt*/ /*<< b.AprivateInt*/ /*<< b.AprotectedInt*/ << endl;
	cout << "c: " /*<< c.ApublicInt*/ /*<< c.AprivateInt*/ /*<< c.AprotectedInt*/ << endl;
	cout << "d: " /*<< d.ApublicInt*/ /*<< d.AprivateInt*/ /*<< d.AprotectedInt*/ << endl;
	cout << "e: " /*<< e.ApublicInt*/ /*<< e.AprivateInt*/ /*<< e.AprotectedInt*/ << endl;
	cout << "f: " << f.ApublicInt /*<< f.AprivateInt*/ /*<< f.AprotectedInt*/ << endl;
	
	a.function();
	/*b.function();*/
	/*c.function();*/
	/*d.function();*/
	/*e.function();*/
	f.function();
	
	/*a.privateFunction();
	b.privateFunction();
	c.privateFunction();
	d.privateFunction();
	e.privateFunction();
	f.privateFunction();*/

	/*a.protectedFunction();
	b.protectedFunction();
	c.protectedFunction();
	d.protectedFunction();
	e.protectedFunction();
	f.protectedFunction();*/
	
	//Check for polymorphism
	function(a);
	//function(b);
	//function(c);
	//function(d);
	//function(e);
	function(f);

	
	return 0;
}
void function(A variable)
{
	return;
}
