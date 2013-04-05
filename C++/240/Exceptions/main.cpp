#include <iostream>
using namespace std;
void function(int);
void useNew();
long double numberOfTimes;
class myException
{
};
class otherException
{
};

int main()
{
	try
	{
		//function(1);
		//function(0);
		useNew();
	}
	catch(myException)
	{
		cout << "Exception" << endl;
	}
	catch(otherException)
	{
		cout << "other exception" << endl;
	}
	catch(...)
	{
		cout << "something" << endl;
	}
	/*catch(bad_alloc)
	{
		cout << "bad alloc" << endl << numberOfTimes;
	}*/
	cout << "test" << endl;
	return 0;
}
void useNew()
{
	numberOfTimes = 0;
	while(true)
	{
		long double * a = new long double[1000000];
		cout << numberOfTimes++ << endl;
	}
}
void function(int a)
{
	if(a)
	{
		throw myException();
	}
	else
	{
		throw otherException();
	}
	
}
