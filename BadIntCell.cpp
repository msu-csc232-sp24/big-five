#include "BadIntCell.h"

IntCell::IntCell(int initialValue) : storedValue{ new int{initialValue} }
{
    // Intentionally empty
}

int IntCell::read() const
{
    return *storedValue;
}

void IntCell::write(int x)
{
    *storedValue = x;
}
