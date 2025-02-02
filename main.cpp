#include <iostream>
#include "MyMathLib.h"
#include "BasicMath.h"
#include "ExtraMath.h"

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Sqrt(9) = " << mySqrt(9) << '\n';
    std::cout << "Suma(5+5) = " << add_values(5, 5) << '\n';
    std::cout << "Resta(5-5) = " << subtract_values(5, 5) << '\n';
    std::cout << "Multiplicacion(5*5) = " << multiply_values(5, 5) << '\n';
    std::cout << "Division(5/5) = " << divide_values(5, 5) << '\n';
    std::cout << "Factorial(5) = " << factorial(5) << '\n';
    std::vector<std::string> permutaciones = crear_permutaciones("123");
    std::cout << "Permutaciones de 123:\n";
    for (const std::string& s : permutaciones) std::cout << s << '\n';
}