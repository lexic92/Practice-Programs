#include <iostream>
#include <iomanip> // for setprecision()
/**
Jan 28
Source: Learncpp.com tutorial 2.5
**/

int main()
{
    using namespace std;
 
    cout << setprecision(16); // show 16 digits
    float fValue = 3.33333333333333333333333333333333333333f;
    cout << fValue << endl;
    double dValue = 3.3333333333333333333333333333333333333;
    cout << dValue << endl;
    
/*	Where does the "junk" come from? And, when I change setprecision to other values, it's consistent "junk"!
	output:
 	3.333333253860474
	3.333333333333333

	3.333333254  //10 precision
	3.333333333

	3.3333332538605  //14 precision
	3.3333333333333
*/

}
