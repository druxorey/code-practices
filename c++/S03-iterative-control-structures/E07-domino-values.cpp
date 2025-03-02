#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= DOMINO VALUES =========]\e[0m\n\n";

	int printLimit = 0;

	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= i; j++) {
			// Print the initial separator for each row
			if (printLimit == 0) {
				std::cout << "   ";
			}

			// Print the domino values
			std::cout << " \e[47;30m" << i << "|" << j << "\e[0m";
			printLimit++;

			// If the limit is reached, print a new line
			if (printLimit == 7) {
				std::cout << "\n";
				printLimit = 0;
			}
		}
	}

	std::cout << "\n";

	return 0;
}
