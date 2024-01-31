#include <iostream>
#include "Car.h"

using std::cout;

int main() {
    cout << "Hi there\n";
    
    Car dodgeRam =Car();
    Car chevy{dodgeRam};
    Car mustang;

    mustang = chevy;

    dodgeRam.start();
    dodgeRam.accelerate();
    dodgeRam.stop();


    return 0;
}
