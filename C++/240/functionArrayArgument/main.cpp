#include <iostream>
using namespace std;
class myClass
{
	public:
	const int num;
	myClass(int variable=0) : num(variable) //Can only initialize constants in the initializer list. Not in the function body.
	{
		//num = variable;
	}
	
};

void displayArray(int array[][3]);
void testArrays();

int main()
{
	testArrays();

	myClass a(1); 
	a.num;

	//myClass b();
	//b.num;
	
}
void testArrays()
{
	int array[2][3] = { {1, 2, 3},
			    {4, 5, 6} };
	displayArray(array);
	

	int four[4][3] = { {1, 2, 3},
			    {4, 5, 6},
			    {7, 8, 9},
			    {10, 11, 12} };

	int one[1][3] = { {1, 2, 3} };

	displayArray(four);
	displayArray(one);

	int other[1][4] = { {1, 2, 3, 4} };
	//displayArray(other);  //Won't compile if that's there.
}
void displayArray(int array[2][3]) //Note: the 2 doesn't even make ANY difference at all, since it won't have a compiler error if you pass in arrays of [1][3] or [4][3]. But you can't pass arrays of [1][4] because the 4 is not a 3.
{
	cout << "Display:" << endl;	
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout << array[i][j] << endl;
		}
	}
	cout << endl;

}
