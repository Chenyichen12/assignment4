//
// Created by chen_yichen on 2024/3/26.
//

#pragma once

#include "Animal.h"

class Giraffe : public Animal {
protected:
    int neckLength;
public:
    int showLength() override { return this->neckLength; }
    explicit Giraffe(int length);
    FoodType getType() override{return Carrot;}
};

