//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_FOODSELLER_H
#define ASSIGNMENT4_FOODSELLER_H

#include "iostream"
#include "list"
#include "../AnimalFood.h"
#include "Adult.h"

class FoodSeller {
protected:
    Money balance;
    std::list<std::unique_ptr<AnimalFood>> foods;
public:
    bool sellFood(int amount, const FoodType& type);
    std::tuple<bool,FoodType> ifSellOut();
    FoodSeller();

    std::list<FoodType> getSellerFood();
};


#endif //ASSIGNMENT4_FOODSELLER_H
