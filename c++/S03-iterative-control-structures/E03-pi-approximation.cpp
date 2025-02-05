#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PI APPROXIMATION =========]\e[0m\n\n";

	double piValue = 4.0;
	int totalIterations, i;

	std::cout << "Enter the number of iterations: ";
	std::cin >> totalIterations;

	if (totalIterations > 100000) {
		for (i = 3; i <= (totalIterations * 4) ; i += 4) {
			piValue = piValue - (4 / (double)i) + (4 / ((double)i + 2.0));
			printf(" \e[0;33mActual calculation:\e[0m %.32lf \n", piValue);
		}
	} else {
		for (i = 3; i <= (totalIterations * 4) ; i += 4) {
			piValue = piValue - (4 / (double)i) + (4 / ((double)i + 2.0));
		}
	}

	printf("The value of π is:\e[0;32m %.32lf \e[0m\n", piValue);

	return 0;
}
