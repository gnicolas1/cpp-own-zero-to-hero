#include <string>
#include <iostream>
#include "Item.h"
using namespace std;

Item::Item(string name_init, float price_init) {
	name = name_init;
	price = price_init;
	discount_percentage = 0;
	discount_price = 0;
}

void Item::update_price(float new_price) {
	price = new_price;
	discount_price = calculate_discount();
	price = price - discount_price;
}

void Item::update_discount(int new_discount) {
	if (new_discount >= 0 && new_discount <= MAX_DISCOUNT) {
		price = price + discount_price;
		discount_percentage = new_discount;
		discount_price = calculate_discount();
		price = price - discount_price;
	}
	else {
		cout << "Discount percentage not allowed!" << endl;
	}
}

float Item::calculate_discount() {
	return (price * discount_percentage / 100);
}