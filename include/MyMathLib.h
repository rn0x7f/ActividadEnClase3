
// math_utils.cpp
// This file contains mathematical utility functions, including a safe square root implementation.

#include <cmath>
#include <stdexcept>

/**
 * @brief Calculates the square root of a non-negative number.
 * 
 * @param x The number whose square root is to be calculated.
 * @return The square root of x.
 * @throws std::runtime_error if x is negative.
 */
double calculate_sqrt(double x) {
    if (x < 0) {
        throw std::runtime_error("Negative argument");
    }
    return std::sqrt(x);
}
