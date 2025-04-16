#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= QUADRATIC ROOTS =========]\e[0m\n\n";

	double quadraticTerm, linearTerm, constantTerm;

	std::cout << "Enter the coefficient A (quadratic term): ";
	std::cin >> quadraticTerm;
	std::cout << "Enter the coefficient B (linear term): ";
	std::cin >> linearTerm;
	std::cout << "Enter the coefficient C (constant term): ";
	std::cin >> constantTerm;

	double discriminantValue = linearTerm * linearTerm - 4 * quadraticTerm * constantTerm;
	
	if (discriminantValue < 0) {
		std::cout << "\n\e[1;31m[RESULT]\e[0m The given polynomial has no real solution\n\e[0m";
		return 1;
	}

	double rootValue = sqrt(discriminantValue);

	double finalPositiveValue = (-linearTerm + rootValue) / (2 * quadraticTerm);
	double finalNegativeValue = (-linearTerm - rootValue) / (2 * quadraticTerm);

	std::cout << "\n\e[0;32mRESULT\e[0m\n\n";
	if (finalPositiveValue < 1 and finalPositiveValue > -1) {
        std::cout << " - Positive root: " << 0 << '\n';
	} else {
        std::cout << " - Positive root: " << finalPositiveValue << '\n';
	}

	if (rootValue != 0) {
        std::cout << " - Negative root: " << finalNegativeValue << '\n';
	}
	std::cout << "\n";

	return 0;
}

