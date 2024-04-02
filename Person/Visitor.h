//
// Created by chen_yichen on 2024/3/26.
//
#pragma once
#include "Person.h"

class Visitor : public Person {
protected:
    std::string id;
public:
    Visitor(const std::string &name, int age, std::string id);
};