#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= DECIMAL SEQUENCE =========]\e[0m\n\n";

	bool isEnded = true;
	int inputNumber, fullNumber = 0;

	do {
		std::cout << "Enter the number: ";
		std::cin >> inputNumber;

		if (inputNumber == -1) {
			isEnded = false;
		} else if (inputNumber < 0 || inputNumber > 10) {
			std::cout << "That's not acceptable, try again.." << '\n';
		} else {
			fullNumber = (fullNumber * 10) + inputNumber;
		}

	} while (isEnded != false);

	std::cout << fullNumber << '\n';

	return 0;
}
