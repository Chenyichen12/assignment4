//
// Created by chen_yichen on 2024/3/26.
//

#pragma once
#include "Animal.h"

class Monkey : public Animal {
protected:
    int armLength;
public:
    int showLength() override { return this->armLength; }

    explicit Monkey(int length);

    FoodType getType() override { return Banana; }
};

