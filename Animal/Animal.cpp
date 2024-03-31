//
// Created by chen_yichen on 2024/3/26.
//

#include "Animal.h"

int Animal::eatFood(int amount) {
    this->eatenFood += amount;
    if (this->eatenFood < this->foodCap) {
        return 0;
    }
    int ci = this->eatenFood / this->foodCap;
    this->eatenFood = this->eatenFood - ci * foodCap;
    return ci;
}

Animal::Animal(int weight, int foodCap) {
    this->weight = weight;
    this->foodCap = foodCap;
    this->eatenFood = 0;
}
