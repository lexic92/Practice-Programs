#include <iostream>
 
void foo(unsigned short x)
{
 std::cout << "x is an unsigned short" << std::endl;
}

void foo(int x)
{
 std::cout << "x is an int" << std::endl;
}

int main()
{
 unsigned short x = 5;
 foo(+x);
}

