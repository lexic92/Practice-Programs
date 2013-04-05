
#include <iostream>
#include "main.h"
#include <iomanip> //for setprecision, etc.
void practice();
int main()
{
//	basics();
//	testInitialize();
//	initializeArraysToZero();
//	threeDArrays();
//	practical2DArray();
//	salemon();
	practice();
}
//OOPC++ Page 270 "salemon.cpp"
void practice()
{
	using namespace std;
	double a = 3000000000;
	cout << a << endl;
}
void salemon()
{
	using namespace std;
	const int DISTRICTS = 4;
	const int MONTHS = 3;
	int d, m;
	double sales[DISTRICTS][MONTHS];
	cout << endl;
	for(d=0; d<DISTRICTS; d++)
		for(m=0; m<MONTHS; m++)
		{
			cout << "Enter sales for district " << d+1;
			cout << ", month " << m+1 << ": ";
			cin >> sales[d][m];
		}
	cout << "\n\n";
	cout << "		Month\n";
	cout << "	1	2	3";
	for(d=0; d<DISTRICTS; d++)
	{
		cout << "\nDistrict " << d+1;
		for(m=0; m<MONTHS; m++)
			cout << setiosflags(ios::fixed) //not exponential
			<< setiosflags(ios::showpoint) //always use point
			<< setprecision(2) 		//digits to right
			<< setw(10)			//field width
			<< sales[d][m];			//get number from array
	}
	cout << endl;
}
void practical2DArray()
{
	using namespace std;
	// Declare a 10x10 array
	const int nNumRows = 10;
	const int nNumCols = 10;
	int nProduct[nNumRows ][nNumCols ] = { 0 };
	 
	// Calculate a multiplication table
	for (int nRow = 0; nRow < nNumRows; nRow++)
	    for (int nCol = 0; nCol < nNumCols; nCol++)
		nProduct[nRow][nCol] = nRow * nCol;
	 
	// Print the table
	for (int nRow = 1; nRow < nNumRows; nRow++)
	{
	    for (int nCol = 1; nCol < nNumCols; nCol++)
		cout << nProduct[nRow][nCol] << "\t";
	 
	    cout << endl;
	}
}
void threeDArrays()
{
	using namespace std;
	int anArray[2][2][2] = {1,2,3,4,5,6,7,8};
	cout << anArray[0][0][0] << endl;
	cout << anArray[0][0][1] << endl;
	cout << anArray[0][1][0] << endl;
	cout << anArray[0][1][1] << endl;
	cout << anArray[1][0][0] << endl;
	cout << anArray[1][0][1] << endl;
	cout << anArray[1][1][0] << endl;
	cout << anArray[1][1][1] << endl;
	//Prints 1 2 3 4 5 6 7 8.

	//Three-dimensional arrays are hard to initialize in any kind of intuitive way using initializer lists, so it’s typically better to initialize the array to 0 and explicitly assign values using nested loops.
}	
void basics()
{
	//type myArray [numRows][numColumns]
	int anArray[3][5]; // a 3-element array of 5-element arrays
	
	/*
	element 1:   [0][0]  [0][1]  [0][2]  [0][3]  [0][4]
	element 2:   [1][0]  [1][1]  [1][2]  [1][3]  [1][4]
	element 3:   [2][0]  [2][1]  [2][2]  [2][3]  [2][4]
	*/

	//HOW TO ACCESS:
	//2nd row, 3rd column (remember it is including a 0th row and 0th column.)
	anArray[2][3] = 7;  
}
void testInitialize()
{	
	{
		// 1) SPECIFYING ROWS AND COLUMNS
		//NOTE: When the C++ compiler processes this list, it actually ignores the inner braces altogether. However, we highly recommend you use them anyway for readability purposes.
		int anArray[3][5] =
		{
			{ 1, 2, 3, 4, 5, }, // row 0
			{ 6, 7, 8, 9, 10, }, // row 1
			{ 11, 12, 13, 14, 15 } // row 2
		};
	}
	{
		// 2) SPECIFYING ONLY THE COLUMNS
		//Two-dimensional arrays with initializer lists can omit (only) the first size specification:  (The compiler can do the math to find out what the rows should be.)
		int anArray[][5] =
		{
			{ 1, 2, 3, 4, 5, },
			{ 6, 7, 8, 9, 10, },
			{ 11, 12, 13, 14, 15 }
		};
	}
	{/*
		// 3) SPECIFYING ONLY THE ROWS
		//  (The compiler can do the math to find out what the columns should be.)
		//GIVES AN ERROR: main.cpp:51: error: declaration of ‘anArray’ as multidimensional array must have bounds for all dimensions except the first

		int anArray[3][] =
		{
			{ 1, 2, 3, 4, 5, },
			{ 6, 7, 8, 9, 10, },
			{ 11, 12, 13, 14, 15 }
		};
	*/}
	{/*
		// 4) DON'T SPECIFY ANYTHING
		// GIVES AN ERROR: main.cpp:63: error: declaration of ‘anArray’ as multidimensional array must have bounds for all dimensions except the first

		int anArray[][] =
		{
			{ 1, 2, 3, 4 },
			{ 5, 6, 7, 8 }
		};
	*/}
}






void initializeArraysToZero()
{
	{
		// 5) Initialize to 0:
		//Note that this only works if you explicitly declare the size of the array! Otherwise, you will get a two-dimensional array with 1 row.
		int anArray[3][5] = { 0 };
	}
	{
		// 5.2) Initialize to 0:
		int anArray[3][5] = { };
	}
	{
		// 6) Initialize to 0:
		int anArray[][5] = { 0 };
	}
	{
		// 6.2) Initialize to 0:
		int anArray[][5] = { };
	}
}


/* THE FOLLOWING METHOD HAS THESE ERRORS:
main.cpp: At global scope:
main.cpp:101: error: multidimensional array must have bounds for all dimensions except the first
main.cpp:101: error: expected ‘,’ or ‘...’ before ‘anArray’
main.cpp: In function ‘void printArray(int, int)’:
main.cpp:106: error: ‘anArray’ was not declared in this scope


void printArray(int nNumRows, int nNumCols, int[][] anArray)
{
	using namespace std;
	for (int nRow = 0; nRow < nNumRows; nRow++)
		for (int nCol = 0; nCol < nNumCols; nCol++)
        		cout << anArray[nRow][nCol];
}
*/
