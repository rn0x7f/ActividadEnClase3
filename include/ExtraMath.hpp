#include <stdexcept>
#include <algorithm>
#include <vector>
#include <string>

long long factorial(int x)
{
	if (x < 0)
	{
		throw std::runtime_error("Negative argument");
	}
	return x == 0 ? 1 : x * factorial(x - 1);
}

std::vector<std::string> crearPermutaciones(std::string s) {
    std::vector<std::string> resultado;
    do {
        resultado.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    return resultado;
}