#include <ctime>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	srand(time(NULL));
	int randomNumber = rand();
	//cout << randomNumber << endl;

	int smallerNumber = randomNumber % 5;
	//cout << smallerNumber << endl;

	
	list<int> myInts;
	myInts.push_back(1);
	myInts.push_back(2);
	myInts.push_back(3);
	myInts.push_back(4);

	list<int>::const_iterator newEnd = remove(myInts.begin(), myInts.end(), 4);

	for(list<int>::const_iterator it = myInts.begin(); it != newEnd; it++)
	{
		cout << (*it) << endl;
	}
}
