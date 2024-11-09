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


void enter() {
	printf("\nPress enter to continue..");
	std::cin.get(); // Wait for user to press enter
	std::cin.get(); // It is necessary to use two times bc the first one doesn't get the \n character
}
