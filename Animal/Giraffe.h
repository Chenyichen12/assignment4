//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_GIRAFFE_H
#define ASSIGNMENT4_GIRAFFE_H

#include "Animal.h"

class Giraffe : public Animal {
protected:
    int neckLength;
public:
    int showLength() override { return this->neckLength; }
};


#endif //ASSIGNMENT4_GIRAFFE_H
