/*
 * autotime_test.cpp
 *
 *  Created on: 2014/04/30
 *      Author: nash
 */

#include "gtest/gtest.h"
#include <autotime.h>

TEST(APITest, test_for_pimpl_idiom) {
	AutoTimer* sut = new AutoTimer("Time1");
	delete sut;
	EXPECT_EQ(1, 1);
}





