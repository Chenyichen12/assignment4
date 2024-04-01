//
// Created by chen_yichen on 2024/3/26.
//

#include "Money.h"


Money::Money() {
    this->current = 0;
}

Money::Money(int fen) {
    this->current = fen;
}

Money::Money(float dollar) {
    this->current = (int) dollar * 10;
}

Money operator+(Money &m1, Money &m2) {
    return Money(m1.current + m2.current);
}

Money operator-(Money &m1, Money &m2) {
    return Money(m1.current - m2.current);
}

float Money::getCurrentDollar() {
    return (float) this->current / 10;
}

int Money::getCurrentFen() {
    return this->current;
}

void Money::changePrice(int fen) {
    this->current = fen;
}

Money Money::operator*(int amount) {
    return Money(amount * this->current);
}
