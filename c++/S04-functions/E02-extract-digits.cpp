#include <iostream>
#include "../U1-libraries/dxinput.cpp"

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


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= EXTRACT DIGITS =========]\e[0m\n\n";

	int fullNumber, stop;

	getInput("Enter the number: ", fullNumber);
	getInput("Enter the final number: ", stop);

	printf("The inverted number is: %d\n", invertNumber(fullNumber));

	return 0;
}
