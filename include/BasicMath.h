
// math_operations.h
// This file contains basic arithmetic operations for generic types.

#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

/**
 * @brief Adds two values of type T.
 * 
 * @tparam T The type of the operands.
 * @param a The first operand.
 * @param b The second operand.
 * @return The sum of a and b.
 */
template <typename T>
T add_values(T a, T b) {
    return a + b;
}

/**
 * @brief Subtracts one value from another of type T.
 * 
 * @tparam T The type of the operands.
 * @param a The first operand.
 * @param b The second operand.
 * @return The result of a - b.
 */
template <typename T>
T subtract_values(T a, T b) {
    return a - b;
}

/**
 * @brief Multiplies two values of type T.
 * 
 * @tparam T The type of the operands.
 * @param a The first operand.
 * @param b The second operand.
 * @return The product of a and b.
 */
template <typename T>
T multiply_values(T a, T b) {
    return a * b;
}

/**
 * @brief Divides one value by another of type T.
 * 
 * @tparam T The type of the operands.
 * @param a The numerator.
 * @param b The denominator.
 * @return The result of a divided by b.
 */
template <typename T>
T divide_values(T a, T b) {
    return a / b;
}

#endif // MATH_OPERATIONS_H
