//
// Created by chen_yichen on 2024/3/26.
//

#include "AnimalFood.h"

#include <utility>

AnimalFood::AnimalFood(FoodType type, int amount) {
    this->type = std::move(type);
    this->amount = amount;
}

bool AnimalFood::sell(int am) {
    if(am>this->amount)
        return false;
    this->amount -= am;
    return true;
}

