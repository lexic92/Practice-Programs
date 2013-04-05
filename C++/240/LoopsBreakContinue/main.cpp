#include <iostream>
#include "main.h"
#include <cstdio> // for getchar()

int main()
{
//	doWhileExample();
//	testLoopScope();
	testForLoop();
	testBreakInForLoop();
	whenYoudActuallyWantAnInfiniteLoop();
	exampleOfContinue();
}
void exampleOfContinue()
{
	using namespace std;
	for (int iii=0; iii < 20; iii++)
	{
		// if the number is divisible by 4, skip this iteration
		if ((iii % 4) == 0)
			continue;
		cout << iii << endl;
	}
}
void whenYoudActuallyWantAnInfiniteLoop()
{
	while (1)
	{
		char chChar = getchar();
		if (chChar == '\n')
			break;
	}
}
void testBreakInForLoop()
{
	using namespace std;
	// count how many spaces the user has entered
	int nSpaceCount = 0;

	// loop 80 times
	int nCount = 0;
	for (; nCount < 80; nCount++)
	{
		char chChar = getchar(); // read a char from user

		// exit loop if user hits enter
		if (chChar == '\n')
			break;

		// increment count if user entered a space
		if (chChar == ' ')
			nSpaceCount++;
	}
	cout << "You typed " << nSpaceCount << " spaces.  nCount: " << nCount << endl;
}
void testForLoop()
{
	using namespace std;
	cout << Exponent(2,3) << endl;
;;;;;

}
int Exponent(int nBase, int nExp)
{
	// returns the value nBase ^ nExp
	int nValue = 1;
	for (int iii=0; iii < nExp; iii++)
	nValue *= nBase;

	return nValue;
}

void testLoopScope()
{/*
	using namespace std;
	for (int iii=0; iii < 10; iii++)
		cout << iii << endl;
	cout << "Can it see iii still? i: " << iii <<< endl;

	//GOT THIS ERROR:
	//main.cpp: In function ‘void testLoopScope()’:
	//main.cpp:15: error: name lookup of ‘iii’ changed for ISO ‘for’ scoping
	//main.cpp:15: note: (if you use ‘-fpermissive’ G++ will accept your code)
	//main.cpp:15: error: expected primary-expression before ‘<’ token
	
*/}
void doWhileExample()
{
	using namespace std;

	// nSelection must be declared outside do/while loop
	int nSelection;

	do
	{
		cout << "Please make a selection: " << endl;
		cout << "1) Addition" << endl;
		cout << "2) Subtraction" << endl;
		cout << "3) Multiplication" << endl;
		cout << "4) Division" << endl;
		cin >> nSelection;
	} while (nSelection != 1 && nSelection != 2 && 
		nSelection != 3 && nSelection != 4);

	// do something with nSelection here
	// such as a switch statement
}
