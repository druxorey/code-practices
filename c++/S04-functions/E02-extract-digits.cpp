#include <iostream>
#include "../U1-libraries/dxinput.hpp"

int invertNumber (int fullNumber) {
	int invertedNumber = 0;

	do {
		invertedNumber = (invertedNumber * 10) + (fullNumber % 10);
		fullNumber /= 10;
	} while ((fullNumber -1) != -1);

	return invertedNumber;
}


int extractDigits(int fullNumber, int stop) {
	fullNumber = invertNumber(fullNumber);
	int extractedNumber = 0;

	do {
		extractedNumber = (extractedNumber * 10) + (fullNumber % 10);
		fullNumber /= 10;
	} while (fullNumber % 10 != stop);

	return extractedNumber;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= EXTRACT DIGITS =========]\e[0m\n\n";

	int fullNumber, stop;

	getcin("Enter the number: ", fullNumber);
	getcin("Enter the stop number: ", stop);

	printf("\nThe extracted number is: \e[0;32m%d\e[0m\n", extractDigits(fullNumber, stop));

	return 0;
}
