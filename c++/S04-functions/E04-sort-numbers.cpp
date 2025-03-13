#include <iostream>
#include "../U1-libraries/dxinput.hpp"

int maxNumber(int number) {
	int digit, max = 0;

	do {
		digit = number % 10;
		number /= 10;
		if (max < digit) {
			max = digit;
			}

	} while ((number - 1) != -1);

	return max;
}


int minNumber(int number) {
	int digit, min = 9;

	do {
		digit = number % 10;
		number /= 10;
		if (min > digit) {
			min = digit;
			}
	} while ((number - 1) != -1);

	return min;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SORT NUMBERS =========]\e[0m\n\n";

	int number;

	do {
		getcin("Enter the number to be evaluated: ", number);

		if (!(number < 1000000 && number > 100000))
			printf("The number must have 6 digits.\n");

	} while (!(number < 1000000 && number > 100000));

	printf("The max number is %i\n", maxNumber(number));
	printf("The min number is %i\n", minNumber(number));

	return 0;
}
