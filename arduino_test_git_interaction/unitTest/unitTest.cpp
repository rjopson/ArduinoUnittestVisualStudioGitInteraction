// unitTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "gtest/gtest.h"

#include "mathTest.h"

TEST(sample_test_case, sample_test)
{
	EXPECT_EQ(1, 1);
}

TEST(mathTest, basicCalculator) 
{
	mathTest calc;
	EXPECT_EQ(11, calc.add(5,6));
	EXPECT_EQ(2, calc.add(5, 20));
	EXPECT_EQ(61, calc.add(5, 1));
	EXPECT_EQ(10, calc.subtract(22, 12));
	EXPECT_EQ(32, calc.multiply(4, 8));
	EXPECT_EQ(2, calc.divide(10, 5));
}


int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	//std::getchar(); // keep console window open until Return keystroke
}