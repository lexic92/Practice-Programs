#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	char str[] = "Hi";
	
	char copy[1];
	cout << copy[3] << endl;
	cout << static_cast<int>(copy[2]) << endl;
	strcpy(copy, str);
	cout << copy << endl;
	cout << static_cast<int>(copy[3]) << endl;
	cout << static_cast<int>(copy[2]) << endl;

}
/*
lexi@Lexi-MacBook:~/Desktop/PracticePrograms/Feb18/getche$ ./a.out

-119
Hi
4
0
*/
