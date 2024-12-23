#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME CHECK =========]\e[0m\n\n";

	int inputNumber, outputNumber;
	int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit;

	std::cout << "Enter the number: ";
	std::cin >> inputNumber;

	fifthDigit = inputNumber / 10000;
	fourthDigit = (inputNumber % 10000) / 1000;
	thirdDigit = (inputNumber % 1000) / 100;
	secondDigit = (inputNumber % 100) / 10;
	firstDigit = inputNumber % 10;

	outputNumber = fifthDigit * 10000 +  fourthDigit * 1000 + thirdDigit * 100 + secondDigit * 10 + firstDigit;

	if (inputNumber == outputNumber) {
		printf("\nThe number %i is capicua\n", inputNumber);
	} else{
		printf("\nThe number %i is not capicua\n", inputNumber);
	}

	return 0;
}
