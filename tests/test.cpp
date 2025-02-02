
// math_tests.cpp
// This file contains unit tests for MyMathLib using Google Test.

#include <gtest/gtest.h>
#include "MyMathLib.h"

TEST(math_test_case, math_test_sqrt9) {
    ASSERT_EQ(3, mySqrt(9));
}
