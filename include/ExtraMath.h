
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <string>

/**
 * @brief Calculates the factorial of a non-negative integer.
 * 
 * @param x The integer whose factorial is to be calculated.
 * @return The factorial of x as a long long.
 * @throws std::runtime_error if x is negative.
 */
long long factorial(int x) {
    if (x < 0) {
        throw std::runtime_error("Negative argument");
    }
    return x == 0 ? 1 : x * factorial(x - 1);
}

/**
 * @brief Generates all permutations of a given string.
 * 
 * @param s The string to permute.
 * @return A vector containing all permutations of the input string.
 */
std::vector<std::string> crear_permutaciones(std::string s) {
    std::vector<std::string> resultado;
    std::sort(s.begin(), s.end());  // Asegura que next_permutation funcione correctamente
    do {
        resultado.push_back(s);
    } while (std::next_permutation(s.begin(), s.end()));
    return resultado;
}
