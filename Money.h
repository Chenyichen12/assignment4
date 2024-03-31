//
// Created by chen_yichen on 2024/3/26.
//

#ifndef ASSIGNMENT4_MONKEY_H
#define ASSIGNMENT4_MONEY_H


class Money {
private:
    int current;
public:
    Money();
    explicit Money(int fen);
    explicit Money(float dollar);
    friend Money operator+(Money &m1, Money &m2);

    friend Money operator-(Money &m1, Money &m2);

    float getCurrentDollar();
    int getCurrentFen();

    void changePrice(int fen);
};


#endif //ASSIGNMENT4_MONKEY_H
