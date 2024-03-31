//
// Created by chen_yichen on 2024/3/26.
//

#include "AnimalEnclosure.h"


AnimalEnclosure::AnimalEnclosure(Animal *ani) {
    this->animal = ani;
    this->state = OPEN;
}

void AnimalEnclosure::feedFood(int amount) {
    int messNum = this->animal->eatFood(amount);
    this->dirtLevel += animal->getFoodCap()*messNum;
}

