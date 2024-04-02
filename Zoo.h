//
// Created by chen_yichen on 2024/3/26.
//

#pragma once

#include "iostream"
#include "vector"
#include "list"
class ZooKeeper;
class FoodSeller;
class AnimalEnclosure;
class Zoo {
protected:
    int openDay = 0;
    bool isStop = false;
    std::string stopRes;
    ZooKeeper *keeper;
    FoodSeller *seller;
    std::vector<std::shared_ptr<AnimalEnclosure>> closures;

    int adNum = 0;
    int childNum = 0;
public:
    Zoo();

    bool ifStop() { return this->isStop; }

    std::string stopReason() { return this->stopRes; }

    void simOneDay();
    ~Zoo();
    std::list<std::shared_ptr<AnimalEnclosure>> getOpenClosure();
    std::tuple<bool,std::string> checkClose();
};
