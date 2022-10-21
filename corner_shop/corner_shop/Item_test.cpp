#include <gtest/gtest.h>
#include "Item.h"

TEST(Item, PriceTest) {
	// Coke, 25 MX, discount = 10%
	Item item ("Coke 500 mL", 25);
	ASSERT_FLOAT_EQ(25, item.get_price());
	item.update_price(28);
	ASSERT_FLOAT_EQ(28, item.get_price());
	item.update_discount(10);
	ASSERT_FLOAT_EQ(25.2, item.get_price());
	item.update_discount(0);
	ASSERT_FLOAT_EQ(28, item.get_price());
}

TEST(Item, DiscountTest) {
	// Ice cream chocolate, 30 MX, discount = 30%
	Item item ("Ice cream chocolate", 30);
	ASSERT_FLOAT_EQ(30, item.get_price());
	item.update_discount(31);
	ASSERT_FLOAT_EQ(0, item.get_discount());
	item.update_discount(30);
	ASSERT_FLOAT_EQ(30, item.get_discount());
	ASSERT_FLOAT_EQ(21, item.get_price());
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}