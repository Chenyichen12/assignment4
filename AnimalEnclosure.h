//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_ANIMALENCLOSURE_H
#define ASSIGNMENT4_ANIMALENCLOSURE_H

#include "Animal/Animal.h"

enum ClosureState {
    OPEN,
    CLOSE
};

class AnimalEnclosure {
protected:
    Animal *animal = nullptr;
    int dirtLevel;
    ClosureState state;

    int currentFoodAmt;
public:
    ClosureState getState() { return this->state; }

    explicit AnimalEnclosure(Animal *ani);

    bool ifOverDirt() { return this->dirtLevel > 2000; };

    void feedFood(int amoint);
};


#endif //ASSIGNMENT4_ANIMALENCLOSURE_H
