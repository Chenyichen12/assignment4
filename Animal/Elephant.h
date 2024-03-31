//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_ELEPHANT_H
#define ASSIGNMENT4_ELEPHANT_H

#include "Animal.h"

class Elephant : public Animal {
protected:
    int trunkLength;
public:
    int getTrunkLength() const { return this->trunkLength; }
};


#endif //ASSIGNMENT4_ELEPHANT_H
