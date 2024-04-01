//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_CHILD_H
#define ASSIGNMENT4_CHILD_H

#include "Visitor.h"
#include "list"
#include "../AnimalFood.h"
#include "../Animal/Animal.h"
class Child: public Visitor{
protected:
    std::list<AnimalFood> foods;
public:
    void getFood(AnimalFood&&);
    void feedAnimal(Animal*,int amo);
};


#endif //ASSIGNMENT4_CHILD_H
