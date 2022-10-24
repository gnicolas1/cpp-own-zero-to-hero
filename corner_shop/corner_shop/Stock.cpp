#include <list>
#include <iostream>
#include <string>
#include "Stock.h"
#include "Item.h"
using namespace std;

Stock::Stock() {
	item_stock = {};
}

void Stock::add_item(Item item) {
	item_stock.push_back(item);
}

void Stock::remove_item(Item item) {
	if(!item_stock.empty()) {
		for(list<Item>::iterator it = item_stock.begin(); it != item_stock.end(); ++it) {
			if (item == *it) {
				item_stock.remove(*it);
				cout << "Item was removed from list!" << endl;
				break;
			}
		}
		cout << "Item is not available for the moment!" << endl;
	}
}

string Stock::find_item_by_name(string name) {
	if(!item_stock.empty()) {
		for(list<Item>::iterator it = item_stock.begin(); it != item_stock.end(); ++it) {
			if (it->get_name() == name)
				return "Item is available";
		}
		return "Item is not available for the moment!";
	}
	else 
		return "There are no available items on stock!";
}