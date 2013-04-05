#include <iostream>
#include <cmath>
#include "main.h"

int main()
{
	simpleExample();
	whatNotToDo();
}
void whatNotToDo()
{
	//The goto statement and it’s corresponding statement label must appear in the same function.
	goto skip; // invalid forward jump
	int x;
skip:
	=
	x = 3; // what would this even evaluate to?
	
	// OUTPUT:
	//main.cpp: In function ‘void whatNotToDo()’:
	//main.cpp:15: error: jump to label ‘skip’
	//main.cpp:13: error:   from here
	//main.cpp:14: error:   crosses initialization of ‘int x’
}
void simpleExample()
{
	using namespace std;
// this is a statement label
tryAgain	: 
	cout << "Enter a non-negative number";
	double dX;
	cin >> dX;
	if (dX < 0.0)
		goto tryAgain; // this is the goto statement
	cout << "The sqrt of " << dX << " is " << sqrt(dX) << endl;
}
