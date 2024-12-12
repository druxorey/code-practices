#include <iostream>
#include <string>
#include "../U1-libraries/dxinput.cpp"

typedef unsigned long long int ulli;

const char HEXADECIMAL_LIST[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
								'A', 'B', 'C', 'D', 'E', 'F'};

void getBase(int &base) {
	std::cout << "Enter the base to be converted: \n";
	printf("  [1] Binary\n");
	printf("  [2] Octal\n");
	printf("  [3] Decimal\n");
	printf("  [4] Hexadecimal\n");
	printf("Option: ");
	std::cin >> base;
}

ulli decimalToBinary(int number) {
	if (number == 0) return 0;
	if (number == 1) return 1;
	return decimalToBinary(number / 2) * 10 + number % 2;
}


std::string decimalToHexadecimal(unsigned int number) {
	if (number == 0) return "";
	return decimalToHexadecimal(number / 16) + HEXADECIMAL_LIST[number % 16];
}


int main() {
	int inputNumber, convertedBase;
	ulli outputNumber;
	std::string outputString;

	std::cout << "\n\e[0;35m[========= BASE CONVERTER =========]\e[0m\n" << '\n';

	getBase(convertedBase);
	if (convertedBase > 2 || convertedBase < 1) {
		printf("Invalid base\n");
		return 1;
	}
	getInput("Enter the the number to convert: ", inputNumber);

	switch (convertedBase){
		case 1:
			outputNumber = decimalToBinary(inputNumber);
			printf("The number %d in base 2 is %lld\n", inputNumber, outputNumber);
			break;
		case 2:
			outputString = decimalToHexadecimal(inputNumber);
			printf("The number %d in base 16 is %s\n", inputNumber, outputString.c_str());
			break;
	}

	return 0;
}
