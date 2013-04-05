#include <iostream>
using namespace std;

class myClass
{
	public:
	int data;
	myClass()
	{
	}
	myClass(int number)
	{
		data = number;
	}
	//If the return type isn't the result of the assignment, then it's not able to be chained in the normal conventional way. That's why the return type is "myClass." It DOES NOT HAVE TO BE.
	//If the parameter is not a "myClass," then it  myClassOne = myClassTwo won't use this, since the right side is not an int. That's why it's a "myClass." (Because that is the type of assignment we wanted to overload. Otherwise the default does a member-by-member copy.)
	myClass & operator=(myClass & other)
	{
		data = other.data;
		cout << "MyClass operator=()" << endl;
		return other;
	}
	void print()
	{
		cout << data << endl;
	}
};
class Derived : public myClass
{
};
int main()
{
	myClass a(1);
	myClass b;
	a.print();
	b.print();
	
	cout << "\n\n---------myClass c(a); c.print();-------------" << endl;
	//Did not invoke operator=. (see the output for yourself if you don't beleve me.)
	myClass c(a);
	c.print();

	cout << "\n\n---------b = a; b.print();---------------" << endl;
	//Invokes the operator=.
	b = a;
	b.print();
	
	cout << "\n\n---------myClass d = a; d.print();---------" << endl;
	myClass d = a; //SPECIAL CASE When it does NOT invoke operator=!!!!!
	d.print();


	cout << "\n\n --------myClass e(a); e.print();------------" << endl;
	myClass e(a);  //Similar effect as myClass e = a, so SIMILARLY DOES NOT CALL operator=.
	e.print();
	
	cout << "\n\n-----------Derived f, g; f=g;-----------------" << endl;
	Derived f, g;
	f = g;
	return 0;
}
