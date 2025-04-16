#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= HAPPY NUMBER =========]\e[0m\n\n";

	int initialNumber, digit1, digit2, digit3, digit4;
	bool isHappyNumber = false, isAscendantNumber = false;

	std::cout << "Please enter a 4-digit number: ";
	std::cin >> initialNumber;

	digit1 = (initialNumber / 1000);
	digit2 = (initialNumber % 1000) / 100;
	digit3 = (initialNumber % 100) / 10;
	digit4 = (initialNumber % 10);

	isHappyNumber = initialNumber / 100 > initialNumber % 100;
	isAscendantNumber = digit4 > digit3 && digit3 > digit2 && digit2 > digit1;

	std::cout << "\n\e[1;34m[RESULT]\e[0m The number is ";
	if (isHappyNumber && isAscendantNumber)
		std::cout << "\e[0;32mvery happy\e[0m.\n";
	else if (!isHappyNumber && !isAscendantNumber)
		std::cout << "\e[0;31munhappy\e[0m.\n";
	else if (isAscendantNumber)
		std::cout << "\e[0;33mascendant\e[0m.\n";
	else if (isHappyNumber)
		std::cout << "\e[0;32mhappy\e[0m.\n";
	std::cout << "\n";

	return 0;
}
