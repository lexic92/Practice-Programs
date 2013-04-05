
#include "global.h"
#include <iostream>
int main()
{
    int g_nValue = 7;
    std::cout << ::g_nValue << std::endl;
    return 0;
}
