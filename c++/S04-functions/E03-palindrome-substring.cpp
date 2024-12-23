#include <iostream>
#include "../U1-libraries/dxinput.cpp"

bool isCapicua(int number) {
	int capicua = 0, comparator = number;

	do {
		capicua = capicua * 10 + number % 10;
		number /= 10;
	} while (number - 1 != -1);

	return capicua == comparator;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME SUBSTRING =========]\e[0m\n\n";

	int number = 0;

	do {
		getInput("Enter the number to be evaluated: ", number);

		if (!(number < 1000000 && number > 100000))
			printf("The number must have 6 digits.\n");

	} while (!(number < 1000000 && number > 100000));

	for (int i=0; i<=3; i++) {
		int evaluatedNumber = number % 1000;
		if (isCapicua(evaluatedNumber)) {
			printf("The number %i is capicua.\n", evaluatedNumber);
			return 0;
		}
		number /= 10;
	}
	printf("There isn't any capicua number.\n");

	return 0;
}
