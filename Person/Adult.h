#pragma once 

#include "../AnimalFood.h"
#include "Child.h"
#include "Visitor.h"
#include "iostream"
#include "list"

class Adult : public Visitor {
protected:
	Money balance;
	std::list<Child> child;

public:
	bool buy(AnimalFood, int amount);

	Adult(const std::string& name, int age, const std::string& id, const Money& balance, const std::list<Child>& child);

	Adult(const std::string& name, int age, const std::string& id);

	Adult();

	void payZooTicket();

	Money getBalance() { return this->balance; }

	void giveFoodToChild(FoodType, int total);

	std::list<Child> getChild() const { return this->child; };
};