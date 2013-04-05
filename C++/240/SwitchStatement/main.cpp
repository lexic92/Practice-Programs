enum Colors
{
    COLOR_BLACK,
    COLOR_WHITE,
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
};

#include <cstdlib>  //This is for the the halt "exit(0);".
#include <iostream>
#include "main.h"




int main()
{
	using namespace std;
//	testHalt();
//	testAmbiguousIfElse();
//	EquivalentToPrintColor(COLOR_BLACK);
//	PrintColor(COLOR_BLACK);	
//	TestNoBlockSwitchStatement(COLOR_BLACK);
//	testIdenticalCases();
//	testMultipleCasesSameStatement();
//	testDefaultInMiddle((Colors)5);
//	testFallThrough();
	testBreaks();
	exampleBreaksWithComments();
	return 0;
}
void exampleBreaksWithComments()
{
	using namespace std;
	switch (2)
	{
		case 1: // Does not match -- skipped
		cout << 1 << endl;
		break;
		case 2: // Match!  Execution begins at the next statement
		cout << 2 << endl; // Execution begins here
		break; // Break terminates the switch statement
		case 3:
		cout << 3 << endl;
		break;
		case 4:
		cout << 4 << endl;
		break;
		default:
		cout << 5 << endl;
		break;
	}
// Execution resumes here
}
void testBreaks()
{/*
	{ // lets say I want to break out of this block
		break;
	// gives this error message:
	// main.cpp:35: error: break statement not within loop or switch

	}
*/}
void testFallThrough()
{
	using namespace std;
	switch (2)
	{
	   case 1: // Does not match -- skipped
	       cout << 1 << endl;
	   case 2: // Match!  Execution begins at the next statement
	       cout << 2 << endl; // Execution begins here
	   case 3:
	       cout << 3 << endl; // This is also executed
	   case 4:
	       cout << 4 << endl; // This is also executed
	   default:
	       cout << 5 << endl; // This is also executed
	}

	//Output: 2 3 4 5
}
void testMultipleCasesSameStatement()
{
	using namespace std;
	char c = '0', d = 'a';

	cout << IsNumber(c) << endl;
	cout << IsNumber(d) << endl;
}
void testDefaultInMiddle(Colors eColor)
{
    using namespace std;
    switch (eColor)
    {
        case COLOR_BLACK:
            cout << "Black";
            break;
	default:
            cout << "Unknown";
            break;
        case COLOR_WHITE:
            cout << "White";
            break;
        case COLOR_RED:
            cout << "Red";
            break;
        case COLOR_GREEN:
            cout << "Green";
            break;
        case COLOR_BLUE:
            cout << "Blue";
            break;
        
    }
}
bool IsNumber(char cChar)
{
    switch (cChar)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return true;
        default:
            return false;
    }
}
void testIdenticalCases()
{
/*		
	switch (nX)
	{
		case 4:
		case 4:  // illegal -- already used value 4!
		case COLOR_BLUE: // illegal, COLOR_BLUE evaluates to 4!
	};
*/
}
void TestNoBlockSwitchStatement(Colors eColor)
{
	const int f = 2;
	const int g = 2;
	
	using namespace std;
	switch(eColor) 
		case COLOR_BLACK: 
			cout << "Test\n";
		// If you put "f-g" instead of COLOR_BLACK, you get this error:
		// main.cpp:34: error: ‘g’ cannot appear in a constant-expression
		// main.cpp:34: error: ‘f’ cannot appear in a constant-expression
		// THAT'S BECAUSE IT WAS "int f = 2" and "int g = 2".  But when you put a "const" keyword in front, then it is allowed!! Hallelujah!!!!!!

		
		//case COLOR_RED:
			//If you put that right here, this is the error I got:
			// main.cpp:40: error: case label ‘(Colors)2u’ not within a switch statement

	cout << "Hello";

/*
OUTPUT for eColor = COLOR_BLACK:  (notice that it DID print "Test".)
Enter a number: 4
4 is > 0 and < 20.
BlackBlackTest
Hello

OUTPUT for eColor = COLOR_RED: (notice that "Test" didn't get printed, but "Hello" did.)
Enter a number: 1
1 is > 0 and < 20.
BlackBlackHello
*/
}
void PrintColor(Colors eColor)
{
    using namespace std;
    switch (COLOR_BLUE)
    {
        case COLOR_BLACK:
            cout << "Black";
            break;
        case COLOR_WHITE:
            cout << "White";
            break;
        case COLOR_RED:
            cout << "Red";
            break;
        case COLOR_GREEN:
            cout << "Green";
            break;
        case COLOR_BLUE:
            cout << "Blue";
            break;
        default:
            cout << "Unknown";
            break;
    }
}
void EquivalentToPrintColor(Colors eColor)
{
    using namespace std;
    if (eColor == COLOR_BLACK)
        cout << "Black";
    else if (eColor == COLOR_WHITE)
        cout << "White";
    else if (eColor == COLOR_RED)
        cout << "Red";
    else if (eColor == COLOR_GREEN)
        cout << "Green";
    else if (eColor == COLOR_BLUE)
        cout << "Blue";
    else
        cout << "Unknown";
}
void testHalt()
{
	using namespace std;
	cout << 1 << endl;
	exit(0); // terminate and return 0 to operating system

	// The following statements never execute
	cout << 2 << endl;
}
void testAmbiguousIfElse()
{
	using namespace std;
	cout << "Enter a number: ";
	int nX;
	cin >> nX;

	if (nX > 0)
	
	// it is bad coding style to nest if statements this way
	if (nX < 20)
		cout << nX << " is > 0 and < 20." << endl;
	
	// who does this else belong to?
	else
		cout << nX << " is > 20." << endl;
	
}
