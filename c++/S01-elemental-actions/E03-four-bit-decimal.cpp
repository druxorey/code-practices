#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= FOUR BIT DECIMAL =========]\e[0m\n\n";

	int binaryInput, decimalOutput = 0;

	std::cout << "Please enter a 4-digit binary number: ";
	std::cin >> binaryInput;

	int bit1, bit2, bit3, bit4;

	bit1 = (binaryInput / 1000);
	bit2 = (binaryInput % 1000) / 100;
	bit3 = (binaryInput % 100) / 10;
	bit4 = (binaryInput % 10);

	decimalOutput = (bit1 * 8) + (bit2 * 4) + (bit3 * 2) + bit4;

	std::cout << "\n\e[1;32m[RESULT]\e[0m The decimal value is: " << decimalOutput << "\n\n";

	return 0;
}
