//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_MONKEY_H
#define ASSIGNMENT4_MONKEY_H

#include "Animal.h"

class Monkey : public Animal {
protected:
    int armLength;
public:
    int showLength() override { return this->armLength; }
    explicit Monkey(int length);
};


#endif //ASSIGNMENT4_MONKEY_H
