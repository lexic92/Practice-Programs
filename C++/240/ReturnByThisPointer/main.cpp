#include <iostream>
using namespace std;

//SAME AS THE OTHER FILE, BUT LEAVING OPERATOR= AS RETURN BY REFERENCE, AND MAKING IT RETURN *THIS.
//ALSO, TRYING TO FIND OUT WHAT CASES YOU NEED TO CHECK FOR EQUALITY.

class myClass
{
	public:
	int data;

	myClass()
	{
	}
	myClass(int number)
	{
		data = number;
	}

	//If the return type isn't the result of the assignment, then it's not able to be chained in the normal conventional way. That's why the return type is "myClass." It DOES NOT HAVE TO BE.
	//If the parameter is not a "myClass," then it  myClassOne = myClassTwo won't use this, since the right side is not an int. That's why it's a "myClass." (Because that is the type of assignment we wanted to overload. Otherwise the default does a member-by-member copy.)
	


	//----------OVERLOADED ASSIGNMENT OPERATOR-----------

	myClass & operator=(myClass & other)
	{
		//***************************************************************
		//If they're the same, you can save time and just return early.
		//*****************************************************************

		data = other.data;
		cout << "MyClass operator=()" << endl;
		return *this;
		//***************************************************//
		//CHANGE---->   RETURNS reference to ITSELF //
		//***************************************************//
	}



	//----------OVERLOADED COPY CONSTRUCTOR--------------
	//--------------INCORRECT VERSION: WILL CAUSE AN INFINITE LOOP--------
	/*
	myClass(myClass other)
	{
		return *this; 
		//Also you aren't supposed to return anything.
	}
	*/




	//----------OVERLOADED COPY CONSTRUCTOR--------------
	// It doesn't have to say (const myClass & other), but it's good to put it because that is the desired effect.  If you are making a new object BASED OFF OF another one, you probably didn't intend to actually CHANGE the other one, did you????
	myClass(myClass & other)
	{
		//**********************************************************************************
		//Don't totally delete the parameter if they are references to the SAME OBJECT!!!!!!!
		//***********************************************************************************
		cout << "COPYCONSTRUCTOR: myClass(myClass & other)" << endl;
	}
	void print()
	{
		cout << data << endl;
	}
};




class Derived : public myClass
{
};




int main()
{
	myClass a(1);
	myClass b;
	a.print();
	b.print();
	


	cout << "\n\n---------b = a; b.print();---------------" << endl;
	//YES operator=.
	//NO copy constructor.  
	b = a;
	b.print();
	


	cout << "\n\n---------myClass d = a; d.print();---------" << endl;
	myClass d = a; //SPECIAL CASE When it does NOT invoke operator=!!!!!
	//NO operator-.
	//YES copy constructor.
	d.print();




	cout << "\n\n --------myClass e(a); e.print();------------" << endl;
	myClass e(a);  //Similar effect as myClass e = a, so SIMILARLY DOES NOT CALL operator=.
	e.print();
	//NO operator=.
	//YES copy constructor.


	
	cout << "\n\n-----------Derived f, g; f=g;-----------------" << endl;
	//YES operator=().
	//NO copy constructor. 
	Derived f, g;
	f = g;

	cout << "\n\n--------------f = f-----------------------------" << endl;
	//YES operator=().
	//NO copy constructor.
	f=f;
	return 0;

	/*
	SUMMARY:
	myClass a(1);
	myClass b;

	b = a; 		//OPERATOR=

	myClass d = a; 	//COPY CONSTRUCTOR

	myClass e(a); 	// COPY CONSTRUCTOR

	Derived f, g;
	f = g; 		//OPERATOR=
	f = f;		//OPERATOR=
	*/
}
