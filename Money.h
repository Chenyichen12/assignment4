#pragma once
class Money
{
private:
	int current;

public:
	Money();
	explicit Money(int fen);
	explicit Money(float dollar);
	friend Money operator+(const Money& m1, const Money& m2);

	friend Money operator-(const Money& m1, const Money& m2);

	Money operator*(int amount) const;
	float getCurrentDollar() const;
	int getCurrentFen() const;


	void changePrice(int fen);
};
