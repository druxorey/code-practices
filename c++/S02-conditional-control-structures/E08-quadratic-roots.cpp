#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= QUADRATIC ROOTS =========]\e[0m\n\n";

	float quadraticTerm, linearTerm, constantTerm, discriminantValue, rootValue, finalPositiveValue, finalNegativeValue;

	std::cout << "Enter the quadratic term: ";
	std::cin >> quadraticTerm; 
	std::cout << "Enter the linear term: ";
	std::cin >> linearTerm; 
	std::cout << "Enter the constant term: ";
	std::cin >> constantTerm; 
	std::cout << '\n';

	discriminantValue = (pow(linearTerm, 2)) - (4 * quadraticTerm * constantTerm);
	
	if (discriminantValue < 0) {
		std::cout << "The given polynomial has no real solution" << '\n';
		return 0;
	}

	rootValue = sqrt(discriminantValue);

	finalPositiveValue = ((-1 * linearTerm) + rootValue) / (2 * quadraticTerm);
	finalNegativeValue = ((-1 * linearTerm) - rootValue) / (2 * quadraticTerm);

	if (finalPositiveValue < 1 and finalPositiveValue > -1) {
		std::cout << "The positive value of the polynomial is: " << 0 << '\n';
	} else {
		std::cout << "The positive value of the polynomial is: " << finalPositiveValue << '\n';
	}

	if (rootValue != 0) {
		std::cout << "The negative value of the polynomial is: " << finalNegativeValue << '\n';
	}

	return 0;
}

