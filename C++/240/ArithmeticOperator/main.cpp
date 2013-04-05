#include <iostream>

int main()
{
	using namespace std;
	
	int result = 5;
	int one = 1;
	int two = 2;
	int three = 3;

	//Arithmetic if operator AKA conditional operator
	cout << (one ? two = 4 : three = 6) << endl;
	cout << two << endl;
	cout << three << endl;
	
/*OUTPUT
4
4
3
So, the expressions will only be evaluated IF it's true or false. They won't both be evaluated no matter what.
*/
}

