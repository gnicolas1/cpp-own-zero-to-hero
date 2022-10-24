#include <gtest/gtest.h>
#include "Stock.h"
#include "Item.h"

TEST(Stock, AddItemTest) {
	Item DuffBeer ("Duff Beer", 30);
	Item Cheetos ("Cheetos", 20);
	Item Coke500 ("Coke 500 mL", 25);
	Stock stockList;
	stockList.add_item(DuffBeer);
	stockList.add_item(Cheetos);
	stockList.add_item(Coke500);
	ASSERT_EQ(3, stockList.get_list_size());
	stockList.remove_item(Cheetos);
	ASSERT_EQ(2, stockList.get_list_size());
	ASSERT_EQ("Item is available", stockList.find_item_by_name("Duff Beer"));
	ASSERT_EQ("Item is not available for the moment!", stockList.find_item_by_name("Cheetos"));
	ASSERT_EQ("Item is available", stockList.find_item_by_name("Coke 500 mL"));
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}