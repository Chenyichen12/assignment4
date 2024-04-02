//
// Created by chen_yichen on 2024/3/26.
//

#include "FoodSeller.h"
#include "tuple"

bool FoodSeller::sellFood(int amount, const FoodType &type) {
    for (auto &item: this->foods) {
        if (item.getType() == type) {
            if (item.ifClear())
                return false;
            if (!item.sell(amount)) {
                this->balance = this->balance + (item.getPrice() * item.getAmount());
                item.clear();
                return true;
            } else {
                this->balance = this->balance + (item.getPrice() * amount);
                return true;
            }
        }
    }
    return false;
}

std::tuple<bool, FoodType> FoodSeller::ifSellOut() {
    for (const auto &item: this->foods) {
        if (item.ifClear()) {
            return {true, item.getType()};
        }
    }
    return {false, Banana};
}

FoodSeller::FoodSeller(const std::string &name, int age) : Person(name, age) {
    auto elephantFood = AnimalFood(Peanut, 10800);
    auto giraffe = AnimalFood(Carrot, 7000);
    auto monkey = AnimalFood(Banana, 4000);

    this->foods = std::list<AnimalFood>();
    foods.push_back(elephantFood);
    foods.push_back(giraffe);
    foods.push_back(monkey);
}

