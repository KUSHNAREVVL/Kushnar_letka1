#include "pch.h"
#include "..\Kushnar_letka\Functions.cpp"

TEST(TestAmountDots, TestAllZero) {
  EXPECT_EQ(Find_dots(0,0,0), 1);
}

TEST(TestAmountDots, TestAllPlus) {
	EXPECT_EQ(Find_dots(1, 1, 1), 5);
	EXPECT_EQ(Find_dots(23.89, 32156, 21), 1378);
	EXPECT_EQ(Find_dots(0.00004, 452.654, 5.6), 76);
}

TEST(TestAmountDots, TestYminus) {
	EXPECT_EQ(Find_dots(7.5, -2, 0.5), 0);
	EXPECT_EQ(Find_dots(12, -21.01234, 5), 74);
	EXPECT_EQ(Find_dots(7.5, -2, 1), 2);
}

TEST(TestAmountDots, TestAllMinus) {
	EXPECT_EQ(Find_dots(-12.1, -8, 2), 10);
	EXPECT_EQ(Find_dots(-3, -9, 0), 1);
	EXPECT_EQ(Find_dots(-3.5, -9.5, 0), 0);
}

TEST(TestAmountDots, TestXminus) {
	EXPECT_EQ(Find_dots(-10, 4, 5), 81);
	EXPECT_EQ(Find_dots(-0.1, 0.1, 3.5), 27);
	EXPECT_EQ(Find_dots(-64, 5, 2), 13);
}

TEST(TestAmountDots, TestDotsZero) {
	EXPECT_EQ(Find_dots(3.2, 0.4, 0.4), 0);
	EXPECT_EQ(Find_dots(0, -98.6, 0.2), 0);
	EXPECT_EQ(Find_dots(7.5, -2, 0.5), 0);
}