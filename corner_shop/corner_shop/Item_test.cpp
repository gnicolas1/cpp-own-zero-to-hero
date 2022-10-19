#include <gtest/gtest.h>
#include "Item.h"

TEST(Item, PriceTest) {
	// Coke, 25 MX, discount = 10%
	Item item ("Coke 500 mL", 25, 10);
	ASSERT_EQ(22.5, item.get_price());
	item.update_price(28);
	EXPECT_EQ(25.2, item.get_price());
	item.update_discount(0);
	EXPECT_EQ(28, item.get_price());
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}