#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= BINATY TO DECIMAL =========]\e[0m\n\n";

	int binary, correctedBinary = 0, decimal = 0, finalDecimal = 0;

	do {
		std::cout << "Enter the number: ";
		std::cin >> binary;

		if (binary == 1 || binary == 0)
			correctedBinary = correctedBinary * 10 + binary;
		else if (binary != -1)
			std::cout << "Wrong number" << '\n';

	} while (binary != -1);

	std::cout << '\n' << "The binary number is : " << correctedBinary << '\n';

	for (int i = 1; correctedBinary > 0; i*=2) {
		decimal = (correctedBinary % 10) * i;
		correctedBinary /= 10;
		finalDecimal += decimal;  
	}

	std::cout << "The decimal number is: " << finalDecimal << '\n';

	return 0;
}
