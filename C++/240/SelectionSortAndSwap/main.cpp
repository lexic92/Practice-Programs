#include <algorithm> // for swap  (in the std namespace)
#include <iostream>
#include "main.h"

int main()
{
	testSwap();
	selectionSort();
}
void testSwap()
{
	using namespace std;

	int x = 2;
	int y = 4;
	cout << "Before swap: x = " << x << ", y = " << y << endl;
	swap(x, y); // swap also lives in std namespace
	cout << "After swap:  x = " << x << ", y = " << y << endl;

	/* OUTPUT:
	Before swap: x = 2, y = 4
	After swap:  x = 4, y = 2
	*/
}
void selectionSort()
{
	using namespace std;
	/*
	Selection sort performs the following steps:
	1) Starting at index 0, search the entire array to find the smallest value
	2) Swap the smallest value found with the value at index 0
	3) Repeat steps 1 & 2 starting from the next index
	
	In other words, we’re going to find the smallest element in the array, and put it in the first position. Then we’re going to find the next smallest element, and put it in the second position. This process will be repeated until we run out of elements.
	*/

	const int nSize = 5;
	int anArray[nSize] = { 30, 50, 20, 10, 40 };
	 
	// Step through each element of the array
	for (int nStartIndex = 0; nStartIndex < nSize; nStartIndex++)
	{
	    // nSmallestIndex is the index of the smallest element
	    // we've encountered so far.
	    int nSmallestIndex = nStartIndex;
	 
	    // Search through every element starting at nStartIndex+1
	    for (int nCurrentIndex = nStartIndex + 1; nCurrentIndex < nSize; nCurrentIndex++)
	    {
		// If the current element is smaller than our previously found smallest
		if (anArray[nCurrentIndex] < anArray[nSmallestIndex])
		    // Store the index in nSmallestIndex
		    nSmallestIndex = nCurrentIndex;
	    }
	 
	    // Swap our start element with our smallest element
	    swap(anArray[nStartIndex], anArray[nSmallestIndex]);
	}


}
