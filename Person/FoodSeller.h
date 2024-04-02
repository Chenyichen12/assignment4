//
// Created by chen_yichen on 2024/3/26.
//
#pragma once

#include "iostream"
#include "list"
#include "../AnimalFood.h"
#include "Adult.h"

class FoodSeller : public Person {
protected:
    Money balance;
    std::list<AnimalFood> foods;
public:
    bool sellFood(int amount, const FoodType &type);

    std::tuple<bool, FoodType> ifSellOut();

    FoodSeller(const std::string&, int);

    std::list<AnimalFood> getSellerFood(){return this->foods;}
};

