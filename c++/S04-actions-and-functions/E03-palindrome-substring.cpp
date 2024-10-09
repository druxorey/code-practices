#include <iostream>

bool isCapicua(int number) {
	int capicua = 0, comparator = number;

	do {
		capicua = capicua * 10 + number % 10;
		number /= 10;
	} while (number - 1 != -1);

	return capicua == comparator;
}


int main() {
	int number;

	std::cout << "\n\e[0;35m[========= PALINDROME SUBSTRING =========]\e[0m\n" << '\n';

	do {
		std::cin.clear();
		printf("Enter the number to be evaluated: ");
		std::cin >> number;
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
