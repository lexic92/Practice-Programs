
#include <iostream>
 
void IncrementAndPrint()
{
    using namespace std;
    static int s_nValue = 1; // fixed duration
    ++s_nValue;
    cout << s_nValue << endl;
} // s_nValue is not destroyed here, but becomes inaccessible
 

void IncrementAndPrintNonstatic()
{
    using namespace std;
    int nValue = 1; // automatic duration by default
    ++nValue;
    cout << nValue << endl;
} // nValue is destroyed here
 


int main()
{
    IncrementAndPrintNonstatic();
    IncrementAndPrintNonstatic();
    IncrementAndPrintNonstatic();
    IncrementAndPrint();
    IncrementAndPrint();
    IncrementAndPrint();
}
/*Output:
2
2
2
2
3
4
*/


