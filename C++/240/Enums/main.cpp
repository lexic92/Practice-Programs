#include "main.h"
#include <iostream>

enum GlobalEnum
{
	ZERO
} g = ZERO;
void testDefineWithVariables();
int main()
{
	enum MainEnum
	{
		ZERO
	} m = ZERO,z = ZERO,t = ZERO;

	using namespace std;
	
	testColors();
	testNinjas();
	testLValue();
	testAssignIntToEnumType();
	testStaticCastIntToEnum();
	testDefineEnumInTermsOfEachOther();
	testMainEnumScope();
	testGlobalEnumScope();
	testDefineWithVariables();
}
void testDefineWithVariables()
{
/*	int g = 1;
	enum Test
	{
	   ONE = g; 
	};
	//Error: main.cpp:25: error: ‘g’ cannot appear in a constant-expression
*/
}
void testGlobalEnumScope()
{
	//IT WORKED!
	g = ZERO;
}
void testMainEnumScope()
{/*
	using namespace std;
	MainEnum m = ZERO;

	/*COMPILER ERROR:
	main2.cpp: In function ‘void testScope()’:
	main2.cpp:28: error: ‘MainEnum’ was not declared in this scope
	main2.cpp:28: error: expected ‘;’ before ‘m’
	*/
}
void testColors()
{
	using namespace std;
	
	// define a new enum named Color
	enum Color
	{
		// Here are the enumerators
		// These define all the possible values this type can hold
		COLOR_BLACK,
		COLOR_RED,
		COLOR_BLUE,
		COLOR_GREEN = 4000000000,  //How is it able to use unsigned int here,
		COLOR_WHITE = -1,		//and signed int here? How does it know?
		COLOR_CYAN,
		COLOR_YELLOW,
		COLOR_MAGENTA
	};

	/*OUTPUT:
	main.cpp:15: warning: this decimal constant is unsigned only in ISO C90

	0
	1
	2
	4000000000
	4000000001
	4000000002
	4000000003
	4000000004

	*/
 
	// Declare a variable of enumerated type Color
	Color black = COLOR_BLACK;
	Color red = COLOR_RED;
	Color blue = COLOR_BLUE;
	Color green = COLOR_GREEN;
	Color white = COLOR_WHITE;
	Color cyan = COLOR_CYAN;
	Color yellow = COLOR_YELLOW;
	Color magenta = COLOR_MAGENTA;

	cout << black << endl;
	cout << red << endl;
	cout << blue << endl;
	cout << green << endl;
	cout << white << endl;
	cout << cyan << endl;
	cout << yellow << endl;
	cout << magenta << endl;
}

void testNinjas()
{
	using namespace std;
	enum Ninja
	{
		// Here are the enumerators
		// These define all the possible values this type can hold
		NARUTO = 1248,
		ROCK_LEE = 555,
		SASUKE = 98765,
		SHIKAMARU = 1000000,
	};

	//Declare a variable of enumerated type Ninja
	Ninja ninja1 = NARUTO;
	Ninja ninja2 = ROCK_LEE;
	Ninja ninja3 = SASUKE;

	cout << endl << "-----Ninjas-----" << endl;
	cout << ninja1 << endl;
	cout << ninja2 << endl;
	cout << ninja3 << endl;
	cout << SHIKAMARU << endl;


}
void testLValue()
{
/*
	using namespace std;
	enum Ninja
	{
		NARUTO,
		ROCK_LEE
	}
	
	//Test out having an enum constant, and trying to reassign it something else.
	//Basically, the question is, are they CONSTANT?

	NARUTO = ROCK_LEE;
	cout << "NARUTO = ROCKLEE; NARUTO: " + NARUTO << endl;
	//OUTPUT: main.cpp:80: error: lvalue required as left operand of assignment
	//So apparently, they are NOT variables! You can NOT reassign them values.
*/
}
void testAssignIntToEnumType()
{
/*
	using namespace std;
	enum Ninja
	{
		NARUTO,
		ROCK_LEE
	}
	
	//Test if you can take an enum VARIABLE and reassign an int to it.

	Ninja ninja1 = 45;
	cout << ninja1 << endl;
	//main.cpp:90: error: invalid conversion from ‘int’ to ‘main()::Ninja’
*/
}
void testStaticCastIntToEnum()
{
	using namespace std;
	enum Ninja
	{
		NARUTO,
		ROCK_LEE
	};
	
	
	//The compiler will not implicitly cast an integer to an enumerated value.
	//It is possible to use a static_cast to force the compiler to put an integer value into an enumerated type, though it’s generally bad style to do so:
	
	Ninja ninja = static_cast<Ninja>(5);
	cout << "static_cast<Ninja>(5): " << ninja << endl;
}
void testDefineEnumInTermsOfEachOther()
{
	using namespace std;
	//**************************************************************
	//EXAMPLE OF DEFINING ENUMS IN TERMS OF EACH OTHER
	enum Nishiura
	{
	   	 // Here are the enumerators
	    	// These define all the possible values this type can hold
	   	TAJIMA,
		ABE = 5,
		RENREN = ABE
		
	};

	cout << "TAJIMA: " << TAJIMA << endl;
	cout << "ABE: " << ABE << endl;
	cout << "RENREN: " << RENREN << endl;
	

}


/* EXAMPLE OF UN-USEFUL CODE:
int ParseFile()
{
    if (!OpenFile())
        return -1;
    if (!ReadFile())
        return -2;
    if (!Parsefile())
        return -3;
 
    return 0; // success
}

EXAMPLE OF USEFUL CODE:
enum ParseResult
{
    SUCCESS = 0,
    ERROR_OPENING_FILE = -1,
    ERROR_READING_FILE = -2,
    ERROR_PARSING_FILE = -3,
};
 
ParseResult ParseFile()
{
    if (!OpenFile())
        return ERROR_OPENING_FILE;
    if (!ReadFile())
        return ERROR_READING_FILE;
    if (!Parsefile())
        return ERROR_PARSING_FILE;
 
    return SUCCESS;
}
*/


