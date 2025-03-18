#include <iostream>

// Template function to get user input
template <typename datatype>
void getcin(std::string message, datatype &input) {
	do {
		std::cout << message;
		std::cin >> input;

		// If the input is valid, break the loop
		if (!std::cin.fail()) break;

		printf("Invalid input. Please try again.\n");

		std::cin.clear(); // Clear the error state of std::cin
		std::cin.ignore(256,'\n'); // Ignore the remaining characters in the input buffer

	} while (true);
}

// Function to pause execution until the user presses Enter
inline void enter() {
	printf("\nPress enter to continue..");
	std::cin.get(); // Wait for user to press enter
	std::cin.ignore();
}


inline void isArgumentValid(int argc, char *argv[], int expected) {
	if (argc != expected + 1) {
		std::cerr << "\e[0;31m[ERROR]\e[0m Usage: " << argv[0] << " <input-file>\n";
		exit(1);
	}
}
