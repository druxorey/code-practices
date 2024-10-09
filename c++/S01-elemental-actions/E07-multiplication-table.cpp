#include <iostream>

int main() {
	int value;
	std::cout << "\n\e[0;35m[========= MULTIPLICATION TABLE =========]\e[0m\n" << '\n';

	std::cout << "Enter a number: ";
	std::cin >> value;

	std::cout << "Multiplication table of " << value << '\n';
	std::cout << "==========================" << '\n';
	std::cout << "1 x " << value << " = " << 1 * value << '\n';
	std::cout << "2 x " << value << " = " << 2 * value << '\n';
	std::cout << "3 x " << value << " = " << 3 * value << '\n';
	std::cout << "4 x " << value << " = " << 4 * value << '\n';
	std::cout << "5 x " << value << " = " << 5 * value << '\n';
	std::cout << "6 x " << value << " = " << 6 * value << '\n';
	std::cout << "7 x " << value << " = " << 7 * value << '\n';
	std::cout << "8 x " << value << " = " << 8 * value << '\n';
	std::cout << "9 x " << value << " = " << 9 * value << '\n';

	return 0;
}
