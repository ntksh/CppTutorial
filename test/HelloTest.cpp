/*
 * HelloTest.cpp
 *
 *  Created on: 2014/04/14
 *      Author: takeshi-nakamoto
 */
#include "gtest/gtest.h"
#include "booleanfunc.h"

TEST(HelloTest, hello) {
	EXPECT_EQ(true, isPositive(1));
}



