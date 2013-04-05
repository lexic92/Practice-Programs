
#include <iostream>
#include "main.h"

int main()
{
	basics();
	importantInfo();
	testVarioiusDeclarationSizes();
	changeIndividualCharsInAString();
	cantDoThis();
	testChangingFirstElementWithoutBrackets();
}
void testChangingFirstElementWithoutBrackets()
{
	using namespace std;
	char szString[] = "string"; // ok
	//szString = 'a'; // main.cpp:18: error: incompatible types in assignment of ‘char’ to ‘char [7]’

	cout << szString << endl; //Should print "atring".
}
void cantDoThis()
{
	/*
	char szString[] = "string"; // ok
	szString = "rope"; // not ok!
	main.cpp: In function ‘void cantDoThis()’:
	main.cpp:16: error: incompatible types in assignment of ‘const char [5]’ to ‘char [7]’
	*/

}
void changeIndividualCharsInAString()
{
	using namespace std;
	char szString[] = "string";
	szString[1] = 'p';
	cout << szString << endl;  //Should print "spring".
}
void testVarioiusDeclarationSizes()
{
	using namespace std;
	// char szString2[1] = "hello";  
	//ERRORS: main.cpp: In function ‘void basics()’:
	//main.cpp:17: error: initializer-string for array of chars is too long
	
	char szString2[6] = "hello"; 
	char szString3[7] = "hello";
	cout <<  "szString3[5]: " << static_cast<int>(szString3[5]) << endl << 
		"szString3[6]: " << static_cast<int>(szString3[6]) << endl;
	
}
void basics()
{
	using namespace std;
	cout << "This is a string literal" << endl;

	//Assign a C-style string
	char szString[] = "string";  //An array of length 7.

	cout << sizeof(szString) << endl;
	for (int nChar = 0; nChar < sizeof(szString); nChar++)
	    cout << static_cast<int>(szString[nChar]) << " ";
	cout << endl;
	/* I tried to do this, and got this error:
		char szString2[1] = "hello";
		main.cpp: In function ‘void basics()’:
		main.cpp:17: error: initializer-string for array of chars is too long
	*/

}
void importantInfo()
{
	/*
	If you try to stick more than 6 chars in the array, you will overwrite the null terminator and the CPU won’t know where the string ends. If you try to print a string with no null terminator, you’ll not only get the string, you’ll also get everything in the adjacent memory slots until you happen to hit a 0.
	*/
}
