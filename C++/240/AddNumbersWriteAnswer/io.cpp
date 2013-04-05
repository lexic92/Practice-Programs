#include "io.h"

int ReadNumber()
{
	using namespace std;
	int num1(4);
	cout << "Four: " << num1 << endl;
	cin >> num1;
	return num1;
}
void WriteAnswer(int num)
{
	using namespace std;
	cout << num << endl;	
}

