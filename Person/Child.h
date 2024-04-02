//
// Created by chen_yichen on 2024/3/26.
//
#pragma once

#include "Visitor.h"
#include "list"
#include "../AnimalFood.h"
#include "../AnimalEnclosure.h"
class Child: public Visitor{
protected:
    std::list<AnimalFood> foods;
public:
    void getFood(AnimalFood&&);
    void feedAnimal(AnimalEnclosure*);

    Child(const std::string &name, int age, const std::string &id);
    Child();
};
