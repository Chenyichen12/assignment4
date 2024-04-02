//
// Created by chen_yichen on 2024/3/26.
//

#pragma once

#include "Animal.h"

class Elephant : public Animal {
protected:
    int trunkLength;
public:
    int showLength() override{return this->trunkLength;}
    explicit Elephant(int length);
    FoodType getType() override{return Peanut;}
};


