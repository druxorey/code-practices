#include <iostream>

int main() {
	double inputNumber, piValue = 4;

	std::cout << "\n\e[0;35m[========= PI APPROXIMATION =========]\e[0m\n" << '\n';

	std::cout << "Enter the number of iterations: ";
	std::cin >> inputNumber;

	for (double i = 3; i <= (inputNumber * 4) ; i += 4) {
		piValue = piValue - (4/i) + (4/(i+2));
	}

	std::cout << "The value of pi is: " << piValue << '\n';

	return 0;
}
