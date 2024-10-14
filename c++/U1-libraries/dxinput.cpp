#include <iostream>

template <typename datatype>

void getInput(std::string message, datatype &input) {
	do {
		std::cout << message;
		std::cin >> input;

		if (!std::cin.fail()) { break; }

		printf("Invalid input. Please try again.\n");
		std::cin.clear();
		std::cin.ignore(256,'\n');

	} while (true);
}
