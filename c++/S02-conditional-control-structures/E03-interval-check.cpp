#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= INTERVAL CHECK =========]\e[0m\n\n";

	float v1, v2, xValue;

	std::cout << "Enter V1: ";
	std::cin >> v1;
	std::cout << "Enter V2: ";
	std::cin >> v2;
	std::cout << "Enter the x value: ";
	std::cin >> xValue;
	std::cout << '\n';

	if (v1 <= xValue && xValue <= v2) {
		std::cout << "The number is inside the interval." << '\n';
	} else {
		std::cout << "The number is outside the interval." << '\n';
	}

	return 0;
}
