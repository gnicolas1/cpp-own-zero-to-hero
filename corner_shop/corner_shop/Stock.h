#include <list>
#include <string>
#include "Item.h"

#ifndef STOCK_H
#define STOCK_H

class Stock {
	std::list <Item> item_stock;
public:
	Stock();
	void add_item(Item);
	void remove_item(Item);
	std::string find_item_by_name(std::string);
	int get_list_size() {return item_stock.size();}
};

#endif