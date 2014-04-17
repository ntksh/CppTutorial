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

TEST(IntegerTest, set_init_value_when_create) {
	Integer sut(123);

	EXPECT_EQ(123, sut.m_value);
}

TEST(IntegerTest, copy_array) {
	IntArray a(10);
	IntArray sut(a);

	EXPECT_EQ(a.Get(0), sut.Get(0));
	sut.Set(0, 9999);
	EXPECT_NE(a.Get(0), sut.Get(0));
}

