#include <iostream>

int main() {
	int originalNumber, invertedNumber = 0;

	std::cout << "\n\e[0;35m[========= INVERTED NUMBER =========]\e[0m\n" << '\n';

	std::cout << "Enter a 4 digit number: "; 
	std::cin >> originalNumber;

	int first,second,third,fourth;

	first = originalNumber / 1000;
	second = (originalNumber % 1000) / 100;
	third = (originalNumber % 100) / 10;
	fourth = originalNumber % 10;

	invertedNumber = (fourth * 1000) + (third * 100) + (second * 10) + first;

	std::cout << "The result of inverting the number is: " << invertedNumber << '\n';

	return 0;
}

