#include <iostream>
#include <iomanip> //for setw()
using namespace std;

class myClass
{
	//void operator!(){}

};

void operator!(myClass){}
int main()
{
	myClass a;
//	!a; //ERROR: Ambiguous!
	cout << "FILL: " << cout.fill() << endl;
	cout << setw(4);
	cout.fill('*');
	cout << 1 << endl;
	cout << cout.fill() << endl;
	cout << cout.precision() << endl;
	cout.precision(1);
	cout << cout.precision() << endl;
	cout << cout.width() << endl;
	cout.width(1);
	cout << cout.width() << endl;
	

	cout.setf(ios::dec);
	cout.setf(ios::oct);
	cout.setf(ios::hex);


}
