#include <iostream>

int main() {
	long long int iteration = 1, iterationLimit, xNumber = 0, yNumber = 1, auxiliarNumber = 0;

	std::cout << "\n\e[0;35m[========= FIBONACCI SEQUENCE =========]\e[0m\n" << '\n';

	std::cout << "Enter de final position in the fibonaccci sequence: ";
	std::cin >> iterationLimit;

	do {
		std::cout << yNumber << '\n';

		auxiliarNumber = xNumber;
		xNumber = yNumber;
		yNumber = auxiliarNumber + yNumber;
		iteration++;

	} while (iteration != iterationLimit);

	std::cout << yNumber << '\n';

	return 0;
}
