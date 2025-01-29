#include <gtest/gtest.h>
#include "ExtraMath.hpp"

TEST(MathTestCase, MathTestExtra)
{
	ASSERT_EQ(120, factorial(5));
	std::vector<std::string> permutaciones = crearPermutaciones("abc");
	ASSERT_EQ(6, permutaciones.size());
	ASSERT_EQ("abc", permutaciones[0]);
	ASSERT_EQ("acb", permutaciones[1]);
	ASSERT_EQ("bac", permutaciones[2]);
	ASSERT_EQ("bca", permutaciones[3]);
	ASSERT_EQ("cab", permutaciones[4]);
	ASSERT_EQ("cba", permutaciones[5]);
}
