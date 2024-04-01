//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_ZOO_H
#define ASSIGNMENT4_ZOO_H

#include "iostream"
#include "Person/ZooKeeper.h"
class Zoo {
protected:
    int openDay = 0;
    bool isStop = false;
    std::string stopRes;
    ZooKeeper *keeper;
public:
    Zoo();

    bool ifStop() { return this->isStop; }

    std::string stopReason() { return this->stopRes; }
    ~Zoo();
};


#endif //ASSIGNMENT4_ZOO_H
