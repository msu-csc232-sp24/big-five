#include <iostream>
#include "BadIntCell.h"

int f()
{
    IntCell a{ 2 };
    IntCell b = a;
    IntCell c;

    c = b;
    a.write( 4 );
    std::cout << "a.read() = " << a.read() << std::endl;
    std::cout << "b.read() = " << b.read() << std::endl;
    std::cout << "c.read() = " << c.read() << std::endl;

    return 0;
}

int main()
{
    return f();
}