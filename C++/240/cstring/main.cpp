#include <string.h>
#include <iostream>
#include "main.h"

int main()
{
//	getInputBadWay();
//	getInputGoodWay(); 
	testStrcpy();
	testStrncpy();
}
void testStrncpy()
{
	char szSource[] = "Copy this!";
	char szDest[50];
	strncpy(szDest, szSource, 49); // copy at most 49 characters (indices 0-48)
	szDest[49] = 0; // ensures the last character is a null terminator
	cout << szDest; // prints "Copy this!"
}
void testStrcpy()
{
	using namespace std;
	{	
		//OKAY:
		char szSource[] = "Copy this!";
		char szDest[50];
		strcpy(szDest, szSource);
		cout << szDest << endl; // prints "Copy this!"
	}
	{
		//BAD:
		char szSource[] = "Copy this!";
		char szDest[4];
		strcpy(szDest, szSource); // buffer overflow!  (What does that mean?)
		cout << szDest << endl;
	}

}
void getInputGoodWay()
{
	//This call to cin.getline() will read up to 254 characters into szString (leaving room for the null terminator!). Any excess characters will be discarded. In this way, we guarantee that buffer overflow will not occur.

	using namespace std;
	char szString[255];
	cin.getline(szString, 255);   //This actually doesn't stop when I put spaces!!!
	cout << "You entered: " << szString << endl;
}
void getInputBadWay()
{
	using namespace std;
	char szString[255]; 
	cin >> szString; //I tried it out, and it will accept stuff but will STOP ACCEPTING IT when you put a space or tab. WHY?
	cout << "You entered: " << szString << endl;
}
