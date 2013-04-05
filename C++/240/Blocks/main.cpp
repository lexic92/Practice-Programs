#include <iostream>

/* EVERYTHING YOU NEED TO KNOW TO BECOME THE BLOCK MASTER
 * 
 * 1. IF STATEMENT HAS MORE THAN ONE STATEMENT THANKS TO USING A BLOCK
 * 2. YOU SHOULD ONLY NEST UP TO 3 or 4 LEVELS DEEP
 * 3. VARIABLES FROM ONE FUNCTION CANNOT BE SEEN FROM ANOTHER FUNCTION
 * 4. VARIABLES DECLARED INSIDE NESTED BLOCKS ARE DESTROYED AS SOON AS THE INNER BLOCK ENDS:
 * 5. Nested blocks are considered part of the outer block in which they are defined. Consequently, variables declared in the outer block can be seen inside a nested block:
 * 6. Note that variables inside nested blocks can have the same name as variable inside outer blocks. When this happens, the nested variable “hides” the outer variable:
 * This is generally something that should be avoided, as it is quite confusing!
 * 7. Variables should be declared in the most limited scope in which they are used. For example, if a variable is only used within a nested block, it should be declared inside that nested block:
 * 
 * 
 */

int main()
{ // start a block
 
    // multiple statements
    testIf();
    testNested();
    
    return 0;
 
} // end a block



//******************************************************
//IF STATEMENT HAS MORE THAN ONE STATEMENT THANKS TO USING A BLOCK
int testIf()
{
    using namespace std;
    cout << "Enter a number: ";
    int nValue;
    cin >> nValue;
 
    if (nValue > 0)
    { // start of nested block
        cout << nValue << " is a positive number" << endl;
        cout << "Double this number is " << nValue * 2 << endl;
    } // end of nested block
}





//******************************************************
//YOU SHOULD ONLY NEST UP TO 3 or 4 LEVELS DEEP
int testNested()
{
    using namespace std;
    cout << "Enter a number: ";
    int nValue;
    cin >> nValue;
 
    if (nValue > 0)
    {
        if (nValue < 10)
        {
            cout << nValue << " is between 0 and 10" << endl;
        }
    }
}





//******************************************************
//VARIABLES FROM ONE FUNCTION CANNOT BE SEEN FROM ANOTHER FUNCTION

void someFunction()
{ // Start main block

    int nValue; // nValue created here

    double dValue = 4.0; // dValue created here

} // nValue and dValue destroyed here
 
int testScope()
{
    // nValue & dValue can not be seen inside this function.
 
    someFunction();
 
    // nValue & dValue still can not be seen inside this function.
 
    return 0;
}



//******************************************************
//VARIABLES DECLARED INSIDE NESTED BLOCKS ARE DESTROYED AS SOON AS THE INNER BLOCK ENDS:
int main()
{
    int nValue = 5;
 
    { // begin nested block
        double dValue = 4.0;
    } // dValue destroyed here
 
    // dValue can not be used here because it was already destroyed!
 
    return 0;
} // nValue destroyed here


//******************************************************
//Nested blocks are considered part of the outer block in which they are defined. Consequently, variables declared in the outer block can be seen inside a nested block:
int main()
{ // start outer block
    using namespace std;
 
    int x = 5;
 
    { // start nested block
        int y = 7;
        // we can see both x and y from here
        cout << x << " + " << y << " = " << x + y;
    } // y destroyed here
 
    // y can not be used here because it was already destroyed!
 
    return 0;
} // x is destroyed here




//******************************************************
//Note that variables inside nested blocks can have the same name as variable inside outer blocks. When this happens, the nested variable “hides” the outer variable:
//This is generally something that should be avoided, as it is quite confusing!
int main()
{ // outer block
    int nValue = 5;
 
    if (nValue >= 5)
    { // nested block
        int nValue = 10;
        // nValue now refers to the nested block nValue.
        // the outer block nValue is hidden
    } // nested nValue destroyed
 
    // nValue now refers to the outer block nValue
 
    return 0;
} // outer nValue destroyed



//******************************************************
//Variables should be declared in the most limited scope in which they are used. For example, if a variable is only used within a nested block, it should be declared inside that nested block:
int main()
{
    // do not declare y here
    {
        // y is only used inside this block, so declare it here
        int y = 5;
        cout << y;
    }
    // otherwise y could still be used here
}
