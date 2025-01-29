#include <gtest/gtest.h>
#include "MyMathLib.h"
#include "BasicMath.hpp"
#include "ExtraMath.hpp"

TEST(MathTestCase, MathTestSqrt9)
{
	ASSERT_EQ(3, mySqrt(9));
}
