//
// Created by chen_yichen on 2024/3/26.
//

#include "Adult.h"

bool Adult::buy(AnimalFood type, int amount) {
    auto money = type.getPrice() * amount;
    this->balance = this->balance - money;
}

Adult::Adult(const std::string &name, int age, const std::string &id, const Money &balance,
             const std::list<Child> &child) : Visitor(name, age, id), balance(balance), child(child) {}
