//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_ANIMALFOOD_H
#define ASSIGNMENT4_ANIMALFOOD_H

#include "iostream"
#include "Money.h"

enum FoodType {
    Peanut, Carrot, Banana
};

class AnimalFood {
protected:
    FoodType type;
    int amount;
    Money price;
public:
    explicit AnimalFood(FoodType type, int amount);

    bool sell(int amount);

    FoodType getType() { return this->type; }

    int getAmount() const { return this->amount; }

    bool ifClear() const { return this->amount == 0; }

    void clear() { this->amount = 0; }

    Money getPrice() { return this->price; }

    void setAmount(int a){this->amount = a;}
};


#endif //ASSIGNMENT4_ANIMALFOOD_H
