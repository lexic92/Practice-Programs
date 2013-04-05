#include <iostream>

int main()
{
    using namespace std;
	bool bValue = true;
	cout << bValue << endl;
	cout << !bValue << endl;
 
	bool bValue2 = false;
	cout << bValue2 << endl;
	cout << !bValue2 << endl;

bool bValue3 = 257;
cout << "sizeof(bool): " << sizeof(bool) << endl;
cout << (int)bValue3 << endl;

if (bValue3)
    cout << "bValue was true" << endl;
else
    cout << "bValue was false" << endl;
}
