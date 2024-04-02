#include "AnimalEnclosure.h"


AnimalEnclosure::AnimalEnclosure(Animal* ani) {
    this->animal = ani;
    this->state = OPEN;
    this->dirtLevel = 0;
}

void AnimalEnclosure::feedFood(int amount) {
    int messNum = this->animal->eatFood(amount);
    this->dirtLevel += animal->getFoodCap() * messNum;
}

