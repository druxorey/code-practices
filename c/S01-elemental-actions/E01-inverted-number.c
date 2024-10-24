#include <stdio.h>

int main() {
	int inputNumber, invertedNumber;
	int firstDigit, secondDigit, thirdDigit, fourthDigit;

	printf("\n\n\e[0;35m[========= INVERTED NUMBER =========]\e[0m\n\n");

	printf("Enter a 4 digit number: ");
	scanf("%d", &inputNumber);

	firstDigit = inputNumber / 1000;
	secondDigit = (inputNumber / 100) % 10;
	thirdDigit = (inputNumber / 10) % 10;
	fourthDigit = inputNumber % 10;

	invertedNumber = (fourthDigit * 1000) + (thirdDigit * 100) + (secondDigit * 10) + firstDigit;

	printf("The inverted number is: %d\n", invertedNumber);

	return 0;
}
