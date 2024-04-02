#include <iostream>
#include "Zoo.h"
#include "tuple"
int main() {
    Zoo z;
    while (!std::get<0>(z.checkClose())) {
        z.simOneDay();
    }
    std::cout << std::get<1>(z.checkClose());
}
