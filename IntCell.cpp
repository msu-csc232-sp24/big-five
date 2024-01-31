#include <algorithm>
#include "IntCell.h"

IntCell::IntCell(int initialValue) : storedValue{ new int{initialValue} }
{
    // Intentionally empty
}

IntCell::~IntCell()
{
    delete storedValue;
}

IntCell::IntCell(const IntCell& other) : storedValue{new int{*other.storedValue}}
{
    // Intentionally empty
}

IntCell::IntCell( IntCell&& other) : storedValue{ other.storedValue}
{
    other.storedValue = nullptr;
}

IntCell& IntCell::operator=(const IntCell& rhs)
{
    if (this != &rhs)
        *storedValue = *rhs.storedValue;
    return *this;
}

IntCell& IntCell::operator=(IntCell&& rhs)
{
    std::swap( storedValue, rhs.storedValue);
    return *this;
}


int IntCell::read() const
{
    return *storedValue;
}

void IntCell::write(int x)
{
    *storedValue = x;
}
