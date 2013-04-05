#include <iostream>

#ifdef INT_2_BYTES
typedef char int8;
typedef int int16;
typedef long int32;
#else
typedef char int8;
typedef short int16;
typedef int int32;
#endif

/*
On machines where integers are only 2 bytes, INT_2_BYTES can be #defined, and the program will be compiled with the top set of typedefs. On machines where integers are 4 bytes, leaving INT_2_BYTES undefined will cause the bottom set of typedefs to be used. In this way, int8 will resolve to a 1 byte integer, int16 will resolve to a 2 bytes integer, and int32 will resolve to a 4 byte integer using the combination of char, short, int, and long that is appropriate for the machine the program is being compiled on.
*/
	typedef long miles; // define miles as an alias for long
 	typedef long speed;
void function2();
int main()
{
	using namespace std;

	

	/* 
	The following two statements are equivalent:
	long nDistance;
	miles nDistance;
	*/

	miles distance2 = 5;
	speed nMhz = 3200;
 
	// The following is okay, because distance2 and nMhz are both type long
	distance2 = nMhz;
	function2();
	

}



/*
POINTERS QUESTION:  Why doesn't the pointer distribute through each thing in "int* pZ, pW;"?

typedefs are generally safer and harder to inadvertently screw up than #defines.

Here’s an example of where using a typedef is better than using a #define:

typedef int* intptr;
intptr pX, pY; // both pX and pY are int*

#define int* intptrdef;
intptrdef pZ, pW; // pZ is int*, but pW is just int!

In the second example, you were probably expecting pW to be of type int*, but it’s of type int instead!
*/

