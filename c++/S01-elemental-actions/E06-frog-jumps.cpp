#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= FROG JUMPS =========]\e[0m\n\n";

	int joseDistance, pedroDistance, joseJumps;

	std::cout << "Enter the distance Jose can jump (in cm): ";
	std::cin >> joseDistance;
	std::cout << "Enter the number of jumps Jose will make: ";
	std::cin >> joseJumps;
	std::cout << "Enter the distance Pedro can jump (in cm): ";
	std::cin >> pedroDistance;
	std::cout << '\n';

	int mcmDivisor = (joseDistance - pedroDistance);

	if (mcmDivisor == 0) mcmDivisor = joseDistance;
	else if (mcmDivisor < 0) mcmDivisor = 1;

	int mcm = (joseDistance * pedroDistance) / mcmDivisor;

	if (mcm <= joseJumps * joseDistance) {
		std::cout << "\n\e[1;32m[RESULT]\e[0m The frogs will meet at the same point:\n";
		std::cout << "  - Jumps required: " << mcm / joseDistance << '\n';
		std::cout << "  - Distance from start: " << mcm << " cm\n\n";
	} else {
		std::cout << "\e[1;31m[RESULT]\e[0m The frogs will not meet before Jose finishes all his jumps.\n\n";
	}

	return 0;
}
