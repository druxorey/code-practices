#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= FIBONACCI SEQUENCE =========]\e[0m\n\n";

	long long int iterationLimit;

	std::cout << "Enter the final position in the Fibonacci sequence: ";
	std::cin >> iterationLimit;

	if (iterationLimit <= 0) {
		std::cout << "Please enter a positive integer." << '\n';
		return 1;
	}

	std::vector<long long int> fibonacci(iterationLimit);
	fibonacci[0] = 0;
	if (iterationLimit > 1) {
		fibonacci[1] = 1;
	}

	for (long long int i = 2; i < iterationLimit; ++i) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (long long int i = 0; i < iterationLimit; ++i) {
		std::cout << fibonacci[i] << '\n';
	}

	return 0;
}
