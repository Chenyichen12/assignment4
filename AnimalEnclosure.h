#pragma once
#include "Animal/Animal.h"
enum ClosureState {
    OPEN,
    CLOSE
};

class AnimalEnclosure {
protected:
    Animal* animal = nullptr;
    int dirtLevel;
    ClosureState state = OPEN;

    int currentFoodAmt;
public:
    ClosureState getState() const { return this->state; }

    explicit AnimalEnclosure(Animal* ani);

    bool ifOverDirt() const { return this->dirtLevel > 2000; };

    void clearAllDirt() { this->dirtLevel = 0; }

    void feedFood(int amount);

    ~AnimalEnclosure() {
        delete this->animal;
        this->animal = nullptr;
    }

    Animal* getAnimal() const { return this->animal; }

    void changeEnclosureState(ClosureState closureState) { this->state = closureState; }


};