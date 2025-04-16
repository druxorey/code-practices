#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= QUADRATIC ROOTS =========]\e[0m\n\n";

	float quadratic, lineal, independent;

	std::cout << "Enter the coefficient A (quadratic term): ";
	std::cin >> quadratic;
	std::cout << "Enter the coefficient B (linear term): ";
	std::cin >> lineal;
	std::cout << "Enter the coefficient C (constant term): ";
	std::cin >> independent;

	float discriminant = lineal * lineal - 4 * quadratic * independent;

	float firstRoot = (-lineal + sqrt(discriminant)) / (2 * quadratic);
	float secondRoot = (-lineal - sqrt(discriminant)) / (2 * quadratic);

	std::cout << "\n\e[1;32m[RESULT]\e[0m The roots of the quadratic equation are:\n";
	std::cout << " - Root 1: " << firstRoot << '\n';
	std::cout << " - Root 2: " << secondRoot << "\n\n";

	return 0;
}
