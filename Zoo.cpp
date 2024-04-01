//
// Created by chen_yichen on 2024/3/26.
//

#include "Zoo.h"
#include "AnimalEnclosure.h"
#include "Animal/Elephant.h"
#include "Animal/Giraffe.h"
#include "Animal/Monkey.h"
#include "Person/ZooKeeper.h"
#include "iostream"

Zoo::Zoo() {
    auto elephantClosure = std::make_shared<AnimalEnclosure>(new Elephant(100));
    auto GiraffeClosure = std::make_shared<AnimalEnclosure>(new Giraffe(200));
    auto monkeyClosure = std::make_shared<AnimalEnclosure>(new Monkey(10));
    this->keeper = new ZooKeeper("zhang san", 20, std::vector<std::shared_ptr<AnimalEnclosure>>());

}

Zoo::~Zoo() {
    delete this->keeper;
}
