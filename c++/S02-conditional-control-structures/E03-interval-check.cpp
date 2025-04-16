#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= INTERVAL CHECK =========]\e[0m\n\n";

	float v1, v2, xValue;

	std::cout << "Enter the lower bound (V1): ";
	std::cin >> v1;
	std::cout << "Enter the upper bound (V2): ";
	std::cin >> v2;
	std::cout << "Enter the value to check (x): ";
	std::cin >> xValue;
	std::cout << '\n';

	bool isInside = (v1 <= xValue && xValue <= v2);

	std::cout << "\e[1;32m[RESULT]\e[0m The value " << xValue;
	std::cout << (isInside ? " is" : " is not");
	std::cout << " inside the interval [" << v1 << ", " << v2 << "]." << "\n\n";

	return 0;
}
