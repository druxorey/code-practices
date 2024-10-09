#include <iostream>
#include <cmath>

int main() {
	float quadratic, lineal, independent;

	std::cout << "\n\e[0;35m[========= QUADRATIC ROOTS =========]\e[0m\n" << '\n';

	std::cout << "Enter the quadratic coefficient: ";
	std::cin >> quadratic;
	std::cout << "Enter the lineal coefficient: ";
	std::cin >> lineal;
	std::cout << "Enter the independent term: ";
	std::cin >> independent;

	float discriminant = lineal * lineal - 4 * quadratic * independent;

	float firstRoot = (-1 * lineal + sqrt(discriminant)) / (2 * quadratic);
	float secondRoot = (-1 * lineal - sqrt(discriminant)) / (2 * quadratic);

	std::cout << "\nThe first root is: " << firstRoot << '\n';
	std::cout << "The second root is: " << secondRoot << '\n';

	return 0;
}
