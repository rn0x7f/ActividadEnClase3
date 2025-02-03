
// math_tests2.cpp
// This file contains unit tests for MyMathLib using Google Test.
#include <gtest/gtest.h>
#include "BasicMath.h"

TEST(math_test_case, math_test_basics)
{
    ASSERT_EQ(4, add_values(2, 2));
    ASSERT_EQ(0, subtract_values(2, 2));
    ASSERT_EQ(4, multiply_values(2, 2));
    ASSERT_EQ(1, divide_values(2, 2));
}
