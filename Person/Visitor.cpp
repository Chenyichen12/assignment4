//
// Created by chen_yichen on 2024/3/26.
//

#include "Visitor.h"

#include <utility>

Visitor::Visitor(const std::string &name, int age, std::string id) : Person(name, age), id(std::move(id)) {}
