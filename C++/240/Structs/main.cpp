#include <iostream>
#include "main.h"

int main()
{
	using namespace std;

	Employee sJoe;

	//How to initialize the struct's members:

	sJoe.nID= 14; // initialize nID within sJoe
	sJoe.nAge = 32; // initialize nAge within sJoe
	sJoe.fWage = 24.15; // initialize fWage within sJoe
	
	cout << "sizeof(sJoe): " << sizeof(sJoe) << endl;


	Employee sFrank; // create an Employee struct for Frank
	sFrank.nID = 15;
	sFrank.nAge = 28;
	sFrank.fWage = 18.27;
	 
	// Print Joe's information
	PrintInformation(sJoe);
	 
	// Print Frank's information
	PrintInformation(sFrank);
	 


	//Multiple Structs: Use the member selection operator again (".").
	sJoe.w.lol = 1;
	cout << "sJoe.w.lol: " << sJoe.w.lol << endl;
	    

	//INITIALIZER LISTS:
	Employee Abe = {{5},1,2,3}; 
	//If you put NULL, that would work too. So you can probably put any expression.
	// But you can't just put ,,, and leave it empty because that will not compile.
	
	cout << "Abe.w.lol (5): " << Abe.w.lol << endl;
	cout << "Abe.nID (1): " << Abe.nID << endl;
	cout << "Abe.nAge (2): " << Abe.nAge << endl;
	cout << "Abe.fWage (3): " << Abe.fWage << endl;


	//TEST OTHER WAYS TO DO STRUCTS:
	//ANONYMOUS STRUCT
	struct 
	{
    		int x;
    		int y;
	} something; // <---- Can only declare right here!

	something.x = 1;
	something.y = 2;



	//REUSED-NAME STRUCT
	struct myStruct
	{
		int z;
	}; // <---- Now you can't make any new structs.

	myStruct myStruct = {1};

	//It won't let you make a new struct!!!
	//main.cpp:66: error: expected ‘;’ before ‘myStruct2’
	myStruct myStruct2 = {1}; //<---- main.cpp:66: warning: statement has no effect
	int savedVariable = myStruct.z;

	return 0;
}


void PrintInformation(Employee sEmployee)
{
	using namespace std;
	cout << "ID:   " << sEmployee.nID << endl;
	cout << "Age:  " << sEmployee.nAge << endl;
	cout << "Wage: " << sEmployee.fWage << endl << endl;
}

