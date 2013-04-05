#include <iostream>
#include <cstring>
using namespace std;
class numClass;
class myClass;

class numClass
{
	public:
	numClass();
	numClass(myClass a);
};
class myClass
{
public:
	myClass(int f){ cout << "myClass(float)" << endl; }
	myClass(){}

	//OPERATOR OVERLOADING SYNTAXES:
	//(Replace void with whatever you want.)
	//(Replace "myClass" with any type you want. But NOT VOID)

	void operator++(){} //Prefix
	void operator++(int){} //Postfix
	void operator--(){} //prefix
	void operator--(int){} //postfix
	void operator!(){}

	void operator+(myClass)const{} //binary add
	void operator-(myClass){} // binary subtract
	void operator%(myClass){}//binary mod
	void operator*(myClass){}//binary multiply
	void operator*(){} //unary dereference
	void operator/(myClass){} //binary divide

	void operator&&(int){}
	void operator||(myClass){}
	void operator&(myClass){}
	void operator|(myClass){}

	void operator<(myClass){} // binary less than
	void operator>(myClass){} // binary greater than
	void operator==(myClass) const{} // binary logical equals
	void operator+=(myClass){}
	void operator[](myClass){}
	myClass operator=(myClass & var){}
	// never return a copy of a reference
	

	operator float(){}
	operator int(){}
	operator bool(){}
	operator char(){}
	operator long(){}
	operator double(){}
	operator char*(){}
	operator char**(){}
	operator char***(){}
	operator char*********(){}
	

	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	int str[3];
	void display(){ cout << str[0]<< " " << str[1] << " " << " "<< str[2] << endl;}
	void init()
	{
		str[0] = 0;
		str[1] = 1;
		str[2] = 2;
	}

};
numClass::numClass(myClass a)
{
	cout << "numClass(myClass a)" << endl;
}
numClass::numClass()
{
}
int main()
{
	
	myClass a, b;
	!a;
	a + b;
	a - b;
	a % b;
	a * b;
	*a;
	a / b;
	a && 1;
	a || b;
	a & b;
	a | b;
	a<b;
	a>b;
	a==b;
	a+=b;
	a=b;
	a[b];

	//Must automatically cast it to float by calling "operator float."
	float f = a; 
	f = (float)a;
	float anotherFloat(a);

	//It was able to automatically cast it to a pointer of any number of asterisks, so long as you defined it.
	char********* charpointer = a; 



	//error: no match for ‘operator=’ in ‘h = g’
	numClass myNumClass;
	myClass c;
	myNumClass = c; //Supposedly uses 1-arg constructor? NOPE.



	//error: no match for ‘operator=’ in ‘l = k’
	int k;
	myClass l;


 
//PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM 
//PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM 
//PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM 

	l = k; //Supposedly uses 1-arg constructor? NOPE.

//PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM 
//PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM 
//PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM PROBLEM 
	

}
