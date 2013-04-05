#include <iostream>

using namespace std;

template <class T> T randomFunction(T n);
int randomFunction(int);
int main()
{
	int a = randomFunction(1.0f);
	cout << a << endl;
	int b = randomFunction(1);
	cout << b << endl;

}

int randomFunction(int n)
{
	cout << "void" << endl;
	return 0;
}
template <class T> T randomFunction(T n)
{
	cout << "template" << endl;
	return n;
}
