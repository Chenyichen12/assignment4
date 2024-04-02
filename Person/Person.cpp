//
// Created by chen_yichen on 2024/3/26.
//

#include "Person.h"


Person::Person() {
    this->name = "undefined";
    this->age = 18;
}

Person::Person(std::string s, int age) {
    this->name = std::move(s);
    this->age = age;
}
