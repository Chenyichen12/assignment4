//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_ADULT_H
#define ASSIGNMENT4_ADULT_H
#include "../AnimalFood.h"
#include "Child.h"
#include "Visitor.h"
#include "iostream"
#include "list"
class Adult: public Visitor{
protected:
    Money balance;
    std::list<Child> child;
public:
    bool buy(AnimalFood,int amount);

    Adult(const std::string &name, int age, const std::string &id, const Money &balance, const std::list<Child> &child);

    Adult(const std::string &name, int age, const std::string &id);
    Adult();
};


#endif //ASSIGNMENT4_ADULT_H
