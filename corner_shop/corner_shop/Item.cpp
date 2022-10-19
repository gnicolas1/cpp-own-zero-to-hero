#include <string>
#include <iostream>
#include "Item.h"
using namespace std;

Item::Item(string name_init, float price_init, int discount_init) {
	name = name_init;
	price = price_init;
	discount_percentage = discount_init;
	if (discount_percentage > 0)
		calculate_price();
}

void Item::update_price(float new_price) {
	price = new_price;
	calculate_price();
}

void Item::update_discount(int new_discount) {
	discount_percentage = new_discount;
	calculate_price();
}

void Item::calculate_price() {
	price = price - (price * discount_percentage / 100);
}