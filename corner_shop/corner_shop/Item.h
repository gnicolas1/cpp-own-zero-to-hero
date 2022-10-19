#include <string>

#ifndef CORSHOP_H
#define CORSHOP_H

#define MAX_DISCOUNT 30;

class Item {
	std::string name;
	float price;
	int discount_percentage;
public:
	Item(std::string, float, int);
	void update_price(float);
	void update_discount(int);
	void calculate_price();
	auto get_name() {return name;}
	auto get_price() {return price;}
	auto get_discount() {return discount_percentage;}
};

#endif