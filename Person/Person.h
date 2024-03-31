//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_PERSON_H
#define ASSIGNMENT4_PERSON_H

#include "iostream"
class Person {
protected:
    std::string name;
    int age;
public:
    Person();
    Person(std::string name,int age);
};


#endif //ASSIGNMENT4_PERSON_H
