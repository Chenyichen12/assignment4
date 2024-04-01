//
// Created by chen_yichen on 2024/3/26.
//

#include <random>
#include <sstream>
#include "Child.h"

void Child::getFood(AnimalFood &&food) {
    bool addFlag = false;
    for (auto &item: this->foods) {
        if (item.getType() == food.getType()) {
            item.setAmount(item.getAmount() + food.getAmount());
            addFlag = true;
            break;
        }
    }
    if (!addFlag) {
        this->foods.push_back(food);
    }
}

void Child::feedAnimal(Animal *ani, int amo) {
    auto type = ani->getType();
    for (auto &item: this->foods) {
        if (item.getType() == type) {
            ani->eatFood(item.getAmount());
        }
    }
}

Child::Child(const std::string &name, int age, const std::string &id) : Visitor(name, age, id) {
    this->foods = std::list<AnimalFood>();
}

std::string randName() {
    int num = rand() % 10;
    auto nameChar = new char[num];
    for (int i = 0; i < num; ++i) {
        nameChar[i] = (char) ('a' + rand() % 26);
    }
    std::string s(nameChar);
    delete[] nameChar;
    return s;
}

std::string generateUUID() {
    std::random_device rd;
    std::mt19937_64 gen(rd());
    std::uniform_int_distribution<uint64_t> dis;

    uint64_t part1 = dis(gen);
    uint64_t part2 = dis(gen);

    std::ostringstream oss;
    oss << std::hex << part1 << part2;

    std::string uuidStr = oss.str();
    return uuidStr.substr(0, 32); // 截取32位作为简化的UUID
}

Child::Child() : Child(randName(), rand() % 18, generateUUID()) {}


