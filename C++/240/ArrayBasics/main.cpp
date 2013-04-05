#include <iostream>
#include "main.h"
#include <cstdio> // for getchar()
#define ARRAY_SIZE 5

int main()
{
	whatAnArrayMeans();
	simpleProgram();
	//declareAnArray();
	initializeAnArray();
	findOutSizeOfAnArray();
	usingEnumsWithArrays();
}
void usingEnumsWithArrays()
{

	enum StudentNames
	{
	    KENNY, // 0
	    KYLE, // 1
	    STAN, // 2
	    BUTTERS, // 3
	    CARTMAN, // 4
	    MAX_STUDENTS // 5
	};
 
	int anTestScores[MAX_STUDENTS]; // allocate 5 integers
	anTestScores[STAN] = 76;

/* NOTICE THAT IF YOU ADD ANOTHER STUDENT, THE ARRAY'S SIZE AUTOMATICALLY UPDATES!!! ^^
	enum StudentNames
	{
	    KENNY, // 0
	    KYLE, // 1
	    STAN, // 2
	    BUTTERS, // 3
	    CARTMAN, // 4
	    WENDY, // 5
	    MAX_STUDENTS // 6
	};
	 
	int anTestScores[MAX_STUDENTS]; // allocate 6 integers
	anTestScores[STAN] = 76;
*/
}
void findOutSizeOfAnArray()
{
	using namespace std;
	int myArray[] = {1,2,3,4,5,6,7,8,9,10};
	int nElements = sizeof(myArray) / sizeof(myArray[0]);
	cout << "sizeof(myArray) (Expected: 4 * 10 = 40): " << sizeof(myArray) << endl;
	cout << "sizeof(myArray[0]) (Expected: 4 bytes because it's an int): " << sizeof(myArray[0]) << endl;
	cout << "nElements (Expected: 40/4 = 10): " << nElements << endl;
}
void initializeAnArray()
{
	using namespace std;
	{
		//1: Treat each element like a variable.
		int myArray[3];
		myArray[0] = 1;
		myArray[1] = 2;
		myArray[2] = 3;

		cout << "Number 1: (Expected 1,2,3)" << endl;
		cout << myArray[0] << endl;
		cout << myArray[1] << endl;
		cout << myArray[2] << endl;
	}

	{
		//2: Name however many values you want, delimited by commas, and the rest will automatically become 0.  (NOTE: if you don't do ANYTHING other than declare it, it does not mean that it is 0 because you didn't fill it in! It's garbage! So this is specifically going out of its way to fill in the rest of the values with 0s!)
	
		int myArray[3] = {1};
		cout << "Number 2: (Expected 1,0,0)" << endl;
		cout << myArray[0] << endl;
		cout << myArray[1] << endl;
		cout << myArray[2] << endl;
	}

	{
		//3: Initialize all to 0 by not putting anything in the braces.
		int myArray[3] = {};
		cout << "Number 3: (Expected 0,0,0)" << endl;
		cout << myArray[0] << endl;
		cout << myArray[1] << endl;
		cout << myArray[2] << endl;
	}

	{
		//4: Initialize EXACTLY THE ONES YOU LIST, and the SIZE will AUTOMATICALLY become the number of elements (assignments) you listed.
		int myArray[] = {1,2,3};
		cout << "Number 4: (Expected 1,2,3)" << endl;
		cout << myArray[0] << endl;
		cout << myArray[1] << endl;
		cout << myArray[2] << endl;
		cout << "sizeof(myArray) (expected 12 [3 elements, 4 bytes each]): " << sizeof(myArray) << endl; 
	}
	
	{
		//5: Initialize an array of length 0:
		int myArray[0] = {};
		cout << "Size of array of length 0 with size 0 explicitly declared. Expected: 0. Actual: " << sizeof(myArray) << endl;
	}
	
	{
		//6: Initialize an array of length 0 by omitting the size and letting it figure out that you want it to be 0.
		int myArray[] = {};
		cout << "Size of array of length 0 with omitted size. Expected: 0. Actual: " << sizeof(myArray) << endl;
		cout << "Should be garbage: " << myArray[0] << endl;
		cout << "Size of that garbage: " << sizeof(myArray[0]) << endl;
	}

	
}
void declareAnArray()
{
	//The size of the array must be a constant: Literal, symbolic, variable, or enum constant. NOT A NON-CONST VARIABLE!!

	// Ok -- 5 is a literal constant
	int anArray[5]; 

	 
	// Ok -- ARRAY_SIZE is a symbolic constant
	int anArray2[ARRAY_SIZE]; 


	// Ok -- nArraySize is a variable constant
	const int nArraySize = 5;
	int anArray3[nArraySize]; 
	 

/*	// Ok -- MAX_ARRAY_SIZE is an enum constant
	enum ArrayElements
	{
	    MAX_ARRAY_SIZE = 5;
	};
	int anArray4[MAX_ARRAY_SIZE]; 
	*/ 

	/*ERROR:
	main.cpp: In function ‘void declareAnArray()’:
	main.cpp:42: error: expected primary-expression before ‘enum’
	main.cpp:42: error: expected ‘;’ before ‘enum’
	*/

	// Not ok! -- nSize is not a constant!
	int nSize = 5;
//	int anArray[nSize]; 
}
void simpleProgram()
{
	using namespace std;
	int anArray[3]; // allocate 3 integers
	anArray[0] = 2;
	anArray[1] = 3;
	anArray[2] = 4;
 
	//Example of how to re-access the variables.
	int nSum = anArray[0] + anArray[1] + anArray[2];
	cout << "The sum is " << nSum << "(Expected: 9)" << endl;
}
void whatAnArrayMeans()
{
	int nTestScoreStudent1;
	int nTestScoreStudent2;
	int nTestScoreStudent3;
	// ...
	int nTestScoreStudent30;

	//This is equivalent to:
	int anTestScores[30]; // allocate 30 integers
}
