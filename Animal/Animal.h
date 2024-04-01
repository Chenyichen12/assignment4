//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_ANIMAL_H
#define ASSIGNMENT4_ANIMAL_H

#include "../AnimalFood.h"
class Animal {
protected:
    int foodCap;

    int weight;
    int eatenFood;
public:
    virtual FoodType getType() = 0;
    int getFoodCap() const { return this->foodCap; }

    int eatFood(int amount);

    int getWeight() const { return this->weight; }

    Animal(int weight, int foodCap);

    virtual int showLength() = 0;
};


#endif //ASSIGNMENT4_ANIMAL_H
