//
// Created by chen_yichen on 2024/3/26.
//
#pragma once

#include "Person.h"
#include "../Zoo.h"
#include "../AnimalEnclosure.h"
#include "iostream"
#include "vector"
#include "list"
class ZooKeeper: public Person {
protected:
    int workDay;
    std::vector<std::shared_ptr<AnimalEnclosure>> manage;
    std::list<std::pair<AnimalEnclosure*,int>> openDate;
public:
    void cleanEnclosure();
    bool ifRun()const{
        return this->workDay>=10;
    }

    ZooKeeper(const std::string &name, int age, const std::vector<std::shared_ptr<AnimalEnclosure>> &manage);
};

