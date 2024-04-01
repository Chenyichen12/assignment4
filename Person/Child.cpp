//
// Created by chen_yichen on 2024/3/26.
//

#include "Child.h"

void Child::getFood(AnimalFood &&food) {
    bool addFlag = false;
    for (auto &item: this->foods) {
        if (item.getType() == food.getType()) {
            item.setAmount(item.getAmount() + food.getAmount());
            addFlag = true;
            break;
        }
    }
    if (!addFlag) {
        this->foods.push_back(food);
    }
}

void Child::feedAnimal(Animal *ani, int amo) {
    auto type = ani->getType();
    for (auto &item: this->foods) {
        if (item.getType() == type) {
            ani->eatFood(item.getAmount());
        }
    }
}
