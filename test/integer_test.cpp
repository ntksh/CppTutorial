/*
 * integer_test.cpp
 *
 *  Created on: 2014/04/15
 *      Author: nash
 */
#include <gtest/gtest.h>
#include "integer.h"

TEST(IntegerTest, init_value_is_zero) {
	Integer sut;

	EXPECT_EQ(0, sut.m_value);
}



