#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PIRATES COORDINATES =========]\e[0m\n\n";

	int firstNumber, secondNumber, thirdNumber;
	int firstX, firstY, secondX, secondY, thirdX, thirdY;
	int xFinal, yFinal;

	std::cout << "Enter the first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter the second number: ";
	std::cin >> secondNumber;
	std::cout << "Enter the third number: ";
	std::cin >> thirdNumber;

	firstX = firstNumber / 100;
	firstY = firstNumber % 100;

	secondX = secondNumber / 100;
	secondY = secondNumber % 100;

	thirdX = thirdNumber / 100;
	thirdY = thirdNumber % 100;

	xFinal = (firstX + secondX + thirdX) / 3;
	yFinal = (firstY + secondY + thirdY) / 3;

	std::cout << "The final coordinate is X:" << xFinal << " Y:" << yFinal << '\n';

	return 0;
}
