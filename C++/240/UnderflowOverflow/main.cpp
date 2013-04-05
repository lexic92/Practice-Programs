#include <iostream>
 
/*
Created Jan 28 2011.
Source: Learncpp.com 2.4 Integers
*/
int main()
{


    using namespace std;
    unsigned short x = 0; // smallest 2-byte unsigned value possible
    cout << "unsigned short x was: " << x << endl;
    x = x - 1; // We expect -1, we get overflow!
    cout << "[[x = x - 1]]" << endl << "x is now: " << x << endl;


	cout << endl;
	cout << endl;

    signed short y = 32767; // largest 2-byte signed value possible
    cout << "signed short y was: " << y << endl;
    y = y + 1; // We desire 32768, but we get overflow!
    cout << "[[y = y + 1]]" << endl << "y is now: " << y << endl;


}
/*OUTPUT

unsigned short x was: 0
[[x = x - 1]]
x is now: 65535


signed short y was: 32767
[[y = y + 1]]
y is now: -32768
*/

