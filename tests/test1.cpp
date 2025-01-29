#include <gtest/gtest.h>
#include "BasicMath.h"

TEST(MathTestCase, MathTestBasics)
{
	ASSERT_EQ(4, Suma(2, 2));
	ASSERT_EQ(0, Resta(2, 2));
	ASSERT_EQ(4, Multiplicacion(2, 2));
	ASSERT_EQ(1, Division(2, 2));
}
