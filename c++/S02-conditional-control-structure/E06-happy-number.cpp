#include <iostream>

int main() {
	int initialNumber, one, two, three, four;
	bool isHappyNumber = false, isAscendantNumber = false;

	std::cout << "\n\e[0;35m[========= HAPPY NUMBER =========]\e[0m\n" << '\n';

	std::cout << "Enter a 4 digit nummber: ";
	std::cin >> initialNumber;

	one = initialNumber / 1000;
	two = (initialNumber % 1000) / 100;
	three = (initialNumber % 100) / 10;
	four = initialNumber % 10;

	isHappyNumber = initialNumber / 100 > initialNumber % 100;
	isAscendantNumber = four > three && three > two && two > one;

	std::cout << "The number is ";
	if (isHappyNumber && isAscendantNumber)
		std::cout << "very happy." << '\n';
	else if (!isHappyNumber && !isAscendantNumber)
		std::cout << "unhappy." << '\n';
	else if (isAscendantNumber)
		std::cout << "ascendant." << '\n';
	else if (isHappyNumber)
		std::cout << "happy." << '\n';

	return 0;
}
