#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= BINARY TO DECIMAL =========]\e[0m\n\n";

	int binary, decimal;

	std::cout << "Enter a 4 digit binary number: ";
	std::cin >> binary;

	int first, second, third, fourth;

	first = binary / 1000;
	second = (binary % 1000) / 100;
	third = (binary % 100) / 10;
	fourth = binary % 10;

	decimal = (first * 8) + (second * 4) + (third * 2) + (fourth * 1);

	std::cout << "The decimal value is: " << decimal << '\n';

	return 0;
}
