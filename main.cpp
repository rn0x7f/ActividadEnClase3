#include <iostream>
#include "MyMathLib.h"
#include "BasicMath.hpp"
#include "ExtraMath.hpp"

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Sqrt(9) = " << mySqrt(9) << '\n';
    std::cout << "Suma(5+5) = " << Suma(5, 5) << '\n';
    std::cout << "Resta(5-5) = " << Resta(5, 5) << '\n';
    std::cout << "Multiplicacion(5*5) = " << Multiplicacion(5, 5) << '\n';
    std::cout << "Division(5/5) = " << Division(5, 5) << '\n';
    std::cout << "Factorial(5) = " << factorial(5) << '\n';
    std::vector<std::string> permutaciones = crearPermutaciones("123");
    std::cout << "Permutaciones de 123:\n";
    for (const std::string& s : permutaciones) std::cout << s << '\n';
}