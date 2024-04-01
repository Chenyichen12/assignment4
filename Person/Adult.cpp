//
// Created by chen_yichen on 2024/3/26.
//

#include <random>
#include <sstream>
#include "Adult.h"

bool Adult::buy(AnimalFood type, int amount) {
    auto money = type.getPrice() * amount;
    this->balance = this->balance - money;
}

Adult::Adult(const std::string &name, int age, const std::string &id, const Money &balance,
             const std::list<Child> &child) : Visitor(name, age, id), balance(balance), child(child) {}

Adult::Adult(const std::string &name, int age, const std::string &id) : Visitor(name, age, id) {
    int childNum = rand() % 3 + 1;
    for (int i = 0; i < childNum; ++i) {
        auto c = Child();
        this->child.push_back(c);
    }
    this->balance = Money(100 + rand() % 100);
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

Adult::Adult() : Adult(randName(), 18 + rand() % 60, generateUUID()) {}
