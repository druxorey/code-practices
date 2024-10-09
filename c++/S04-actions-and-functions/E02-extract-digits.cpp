#include <iostream>

int invertNumber (int fullNumber) {
	int invertedNumber = 0;

	do {
		invertedNumber = (invertedNumber * 10) + (fullNumber % 10);
		fullNumber /= 10;
	} while ((fullNumber -1) != -1);

	return invertedNumber;
}


int extractDigits(int fullNumber, int stop) {
	bool isEnded = false;
	int finalQuantity = 0;

	do {
		if (fullNumber % 10 == stop) {
			isEnded = true;
		} else {
			finalQuantity = (finalQuantity * 10) + (fullNumber % 10);
			fullNumber /= 10;
		}
	} while (!isEnded);

	return finalQuantity;
}


int main() {
	int fullNumber, stop;

	std::cout << "\n\e[0;35m[========= EXTRACT DIGITS =========]\e[0m\n" << '\n';

	std::cout << "Enter the number: ";
	std::cin >> fullNumber;
	std::cout << "Enter the final number: ";
	std::cin >> stop;

	std::cout << "The final calculation is: " << extractDigits(invertNumber(fullNumber), stop) << '\n';

	return 0;
}
