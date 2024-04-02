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
	this->current = (int)dollar * 100;
}

Money operator+(const Money& m1, const Money& m2) {
	return Money(m1.current + m2.current);
}

Money operator-(const Money& m1, const Money& m2) {
	return Money(m1.current - m2.current);
}

float Money::getCurrentDollar() const {
	return static_cast<float>(this->current) / 100;
}

int Money::getCurrentFen() const {
	return this->current;
}

void Money::changePrice(int fen) {
	this->current = fen;
}

Money Money::operator*(int amount) const
{
	return Money(amount * this->current);
}
