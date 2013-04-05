#include <iostream>
using namespace std;

//SAME AS THE OTHER FILE, BUT THIS IS THE TYPE OF OPERATOR= AND COPY CONSTRUCTORS I SHOULD DO, so base all future functions off of these.


//FYI: If you put the assignment operator and the copy constructor's deep copy in the same place, it's better.
//FYI: If you put the assignment operator and copy constructor under the "Private" section, then it effectively makes it IMPOSSIBLE to invoke them from the objects, so that's how you make it impossible (if you wanted to prevent mistakes or something).

class myClass
{
	public:
	int data;

	myClass()
	{
		cout << "Default myClass() CONSTRUCTOR" << endl;
	}
	myClass(int number)
	{
		cout << "INT CONSTRUCTOR myClass(int number)" << endl;
		data = number;
	}

	//If the return type isn't the result of the assignment, then it's not able to be chained in the normal conventional way. That's why the return type is "myClass." It DOES NOT HAVE TO BE.
	//If the parameter is not a "myClass," then it  myClassOne = myClassTwo won't use this, since the right side is not an int. That's why it's a "myClass." (Because that is the type of assignment we wanted to overload. Otherwise the default does a member-by-member copy.)
	


	//----------OVERLOADED ASSIGNMENT OPERATOR-----------
	//Worked even when the return type was void * and it returned "this". So I assume you can have it 	return whatever you want.
	//When I take the & off of the parameter, then it calls the copy constructor every time it calls operator=. (Must be because it copies it onto the runtime stack of this function so it can have its own copy of it.)
	//When I change the parameter type from myClass to int, then it no longer shows this function's output (to show that it was called). So it must use a default member-by-member-copying operator=.

	myClass &  operator=(myClass & other)
	{
		cout << "MyClass operator=()" << endl;
		//***************************************************************
		//If they're the same, you can save time and just return early.
		//PLUS, if you DELETE allocated memory so you can make room for the 
		//assigned values to be copied in, and they're the same, then you're
		//TRAPPED!!!!!!!!!!!! D: D: D: D: D:
		//*****************************************************************
		

		//*********************************************
		//Check for self-assignment:
		if(this == &other)
		{
			return *this;
		}
		//*********************************************

		deepCopy(other);		
	
		
	
		//***************************************************//
		// Return reference to itself
		//***************************************************//
		return *this;
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
	//If you change the paramter to float (for example) instead of myClass, then it must generate one for you and doesn't call this one (because it stopped showing this function's output on the terminal when I tried it).
	//If you take off the & in the paramter, then it won't work because it'll go in an infintie loop!
	//And it doesn't return anything, so that means that there's nothing left to explain. Yipee!!!! :D
	
	
	//********************************************
	//CHANGE: PUT CONST since it's more accurate.
	//********************************************
	myClass(const myClass & other)
	{
		
		//**********************************************************************************
		//Don't totally delete the parameter if they are references to the SAME OBJECT!!!!!!!
		//***********************************************************************************
		cout << "COPYCONSTRUCTOR: myClass(myClass & other)" << endl;
		
		deepCopy(other);

		//*****************************
		//NOTE: Don't return anything.
		//*****************************
	
	}
	void print()
	{
		cout << data << endl;
	}
	private:
	//DO NOT pass it by object, or it will go in an infinite loop of copy constructor, deep copy, copy constructor, deep copy, etc.
	//It has to be const because the other function had ITS one be const.
	//Since it passes by reference, it has only a little overhead.
	void deepCopy(const myClass & other)
	{
		data = other.data;
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
	myClass a(1); //INT CONSTRUCTOR
	myClass b;	//DEFAULT CONSTRUCTOR

	b = a; 		//OPERATOR=

	myClass d = a; 	//COPY CONSTRUCTOR   //NOTE: Does not call any other constructors!

	myClass e(a); 	// COPY CONSTRUCTOR

	Derived f, g; //DEFAULT CONSTRUCTOR, DEFAULT CONSTRUCTOR
	f = g; 		//OPERATOR=
	f = f;		//OPERATOR=
	*/
}
