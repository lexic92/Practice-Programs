#include <iostream>
 
int main()
{
    using namespace std;
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl;

	short a = -32768;
	cout << "-32,768: " << a << endl;
	signed short b = -32768;
	cout << "-32,768 signed: " << b << endl;
	unsigned short c = 65535U;
	cout << "65,535 unsigned: " << c << endl;

    return 0;
}
/*
Result on Ubuntu 32bit:
bool		1
char		1
wchar_t		4
short		2
int		4
long		4
float		4
double		8
long double	12
*/

