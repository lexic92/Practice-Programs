
#include <iostream>
 


int main()
{
	using namespace std;
	double dValue = 3; // implicit conversion to double value 3.0
	int nValue = 3.14156; // implicit conversion to integer value 3

	int fortyEight = 48;
	char ch = static_cast<char>(fortyEight);

	int oneHundred = 100;
	oneHundred = static_cast<int>(nValue / 2.5); //It doesn't do any difference when I include "static_cast<int>"???


	cout << "dValue: " << dValue << endl;
	cout << "nValue: " << nValue << endl;
	cout << "fortyEight: " << fortyEight << endl;
	cout << "oneHundred: " << oneHundred << endl;


	//Try to do some crazy stuff.
	unsigned long fourBillion = 4294967295UL;
	unsigned long fourBillion2 = 4294967295UL;
	
	cout << "fourBillion: " << fourBillion << endl;
	cout << "fourBillion2: " << fourBillion2 << endl;

	float eightBillionFloat = fourBillion + (float)fourBillion2;

	cout << "eightBillionFloat: " << eightBillionFloat << endl;


	/* COMPILER WARNINGS:
main.cpp:26: warning: integer constant is too large for ‘long’ type
main.cpp:27: warning: this decimal constant is unsigned only in ISO C90
main.cpp: In function ‘int main()’:
main.cpp:26: warning: large integer implicitly truncated to unsigned type
main.cpp:13: warning: unused variable ‘ch’

	OUTPUT:
dValue: 3
nValue: 3
fortyEight: 48
oneHundred: 1
fourBillion: 0
fourBillion2: 4294967286
eightBillionFloat: 4.29497e+09

*/

}



