#include "AnimalFood.h"
//
// Created by chen_yichen on 2024/3/26.
//
#include <utility>

AnimalFood::AnimalFood(FoodType type, int amount) {
    this->type = type;
    this->amount = amount;
    switch (type) {
    case Peanut:
        this->price = Money(20);
        break;
    case Carrot:
        this->price = Money(30);
        break;
    case Banana:
        this->price = Money(50);
        break;
    }
}

bool AnimalFood::sell(int am) {
    if (am > this->amount)
        return false;
    this->amount -= am;
    return true;
}

