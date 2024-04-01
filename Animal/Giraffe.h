//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_GIRAFFE_H
#define ASSIGNMENT4_GIRAFFE_H

#include "Animal.h"

class Giraffe : public Animal {
protected:
    int neckLength;
public:
    int showLength() override { return this->neckLength; }
    explicit Giraffe(int length);
    FoodType getType() override{return Carrot;}
};


#endif //ASSIGNMENT4_GIRAFFE_H
