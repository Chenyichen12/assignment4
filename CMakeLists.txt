cmake_minimum_required(VERSION 3.27)
project(assignment4)

set(CMAKE_CXX_STANDARD 17)

add_executable(assignment4 main.cpp
        Zoo.cpp
        Zoo.h
        Animal/Monkey.cpp
        Animal/Monkey.h
        AnimalFood.cpp
        AnimalFood.h
        AnimalEnclosure.cpp
        AnimalEnclosure.h
        Animal/Animal.cpp
        Animal/Animal.h
        Animal/Elephant.cpp
        Animal/Elephant.h
        Animal/Giraffe.cpp
        Animal/Giraffe.h
        Money.cpp
        Money.h
        Person/Person.cpp
        Person/Person.h
        Person/ZooKeeper.cpp
        Person/ZooKeeper.h
        Person/FoodSeller.cpp
        Person/FoodSeller.h
        Person/Visitor.cpp
        Person/Visitor.h
        Person/Child.cpp
        Person/Child.h
        Person/Adult.cpp
        Person/Adult.h)
