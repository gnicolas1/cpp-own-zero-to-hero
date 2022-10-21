#include <string>

#ifndef CORSHOP_H
#define CORSHOP_H

#define MAX_DISCOUNT 30

class Item {
	std::string name;
	float price;
	float discount_price;
	int discount_percentage;
public:
	Item(std::string, float);
	void update_price(float);
	void update_discount(int);
	float calculate_discount();
	std::string get_name() {return name;}
	float get_price() {return price;}
	int get_discount() {return discount_percentage;}
};

#endif