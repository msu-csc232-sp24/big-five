#include "Car.h"
#include <iostream>
using std::cout;

Car::Car() : model{ "" }
{
    // intentionally empty
}

Car::~Car() {
    cout << "Goodbye\n";
}

Car::Car(const Car & other ) {
    cout << "Car::Car(const Car &)\n";
}

Car & Car::operator=(const Car & rhs) {
    cout << "Car & Car::operator=(const Car &)\n";
    return *this;
}

void Car::start() {
    cout << "Car::start()\n";
}

void Car::accelerate() {
    cout << "Car::accelerate()\n";
}

void Car::stop() {
    cout << "Car::stop()\n";
}
