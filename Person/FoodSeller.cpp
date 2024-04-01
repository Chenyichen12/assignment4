//
// Created by chen_yichen on 2024/3/26.
//

#include "FoodSeller.h"


bool FoodSeller::sellFood(int amount, const FoodType &type) {
    bool flag = false;
    for (const auto &item: this->foods) {
        if (item->getType() == type) {
            if (item->ifClear())
                return false;
            if (item->sell(amount)) {
                item->clear();
                flag = true;
            };
            break;
        }
    }
    return flag;
}

std::tuple<bool, FoodType> FoodSeller::ifSellOut() {
    for (const auto &item: this->foods) {
        if (item->ifClear()) {
            return {true, item->getType()};
        }
    }
    return {false, Banana};
}

FoodSeller::FoodSeller() {
    auto elephantFood = std::make_unique<AnimalFood>(Peanut, 1000);
    auto giraffe = std::make_unique<AnimalFood>(Carrot, 7000);
    auto monkey = std::make_unique<AnimalFood>(Banana, 4000);

    this->foods = std::list<std::unique_ptr<AnimalFood>>();
    foods.push_back(std::move(elephantFood));
    foods.push_back(std::move(giraffe));
    foods.push_back(std::move(monkey));
}

std::list<FoodType> FoodSeller::getSellerFood() {
    auto newList = std::list<FoodType>(foods.size());
    for (const auto &item: this->foods) {
        newList.push_back(item->getType());
    }
    return newList;
}
