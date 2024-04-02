//
// Created by chen_yichen on 2024/3/26.
//

#include "Zoo.h"
#include "AnimalEnclosure.h"
#include "Animal/Elephant.h"
#include "Animal/Giraffe.h"
#include "Animal/Monkey.h"
#include "Person/ZooKeeper.h"
#include "Person/FoodSeller.h"
#include "iostream"
#include "tuple"

void equalBuyFood(Adult *adult, FoodSeller *seller) {
    int moneys = adult->getBalance().getCurrentFen() / 3;
    for (const auto &item: seller->getSellerFood()) {
        int amount = moneys / item.getPrice().getCurrentFen();
        if (seller->sellFood(amount, item.getType())) {
            adult->buy(item, amount);
            adult->giveFoodToChild(item.getType(), amount);
        }
    }
}

Zoo::Zoo() {
    auto elephantClosure = std::make_shared<AnimalEnclosure>(new Elephant(100));
    auto GiraffeClosure = std::make_shared<AnimalEnclosure>(new Giraffe(200));
    auto monkeyClosure = std::make_shared<AnimalEnclosure>(new Monkey(10));

    auto cc = std::vector<std::shared_ptr<AnimalEnclosure>>();
    cc.push_back(elephantClosure);
    cc.push_back(GiraffeClosure);
    cc.push_back(monkeyClosure);
    this->closures = cc;
    this->keeper = new ZooKeeper("zhang san", 20, cc);
    this->seller = new FoodSeller("li si", 21);
}

Zoo::~Zoo() {
    delete this->keeper;
}

void Zoo::simOneDay() {
    if (this->isStop)
        return;
    this->openDay++;
    int num = rand() % 20 + 100;
    auto adults = std::vector<Adult>(rand() % 20 + 20);
    int cNum = 0;
    for (const auto &ad: adults) {
        cNum += (int) ad.getChild().size();
    }
    this->adNum += num;
    this->childNum += cNum;

    for (auto &adult: adults) {
        equalBuyFood(&adult, this->seller);
        auto open = this->getOpenClosure();
        for (auto &child: adult.getChild()) {
            for (auto &item: open) {
                child.feedAnimal(item.get());
            }
        }
    }

    this->keeper->cleanEnclosure();
}


std::list<std::shared_ptr<AnimalEnclosure>> Zoo::getOpenClosure() {
    auto res = std::list<std::shared_ptr<AnimalEnclosure>>();
    for (const auto &item: this->closures) {
        if (item->getState() == OPEN) {
            res.push_back(item);
        }
    }
    return res;
}

std::string getName(FoodType type) {
    switch (type) {

        case Peanut:
            return "The zoo closed because the seller ran out of peanuts.";
        case Carrot:
            return "The zoo closed because the seller ran out of carrots.";
        case Banana:
            return "The zoo closed because the seller ran out of bananas.";
    }
}

std::tuple<bool, std::string> Zoo::checkClose() {
    if (this->keeper->ifRun()) {
        return {true, "The zoo closed because the zoo keeper had enough of cleaning and quit!"};
    }
    bool sell;
    FoodType type;
    std::tie(sell, type) = this->seller->ifSellOut();
    if (sell) {
        return {true, getName(type)};
    }
    return {false, "Happy"};
}
