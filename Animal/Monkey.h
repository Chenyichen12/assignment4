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
    int getArmLength() const { return armLength; }

};


#endif //ASSIGNMENT4_MONKEY_H
