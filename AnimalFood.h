//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_ANIMALFOOD_H
#define ASSIGNMENT4_ANIMALFOOD_H

enum FoodType {
    peanuts, carrots, bananas
};

class AnimalFood {
protected:
    FoodType type;
    int amount;
public:
    explicit AnimalFood(FoodType type,int amount);
    bool sell(int amount);
    FoodType getType(){return this->type;}

    int getAmount() const{return this->amount;}
    bool ifClear() const{return this->amount==0;}
    void clear(){this->amount = 0;}

};


#endif //ASSIGNMENT4_ANIMALFOOD_H
