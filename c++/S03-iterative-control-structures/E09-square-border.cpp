#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SQUARE BORDER =========]\e[0m\n\n";

	int borderSize;

	std::cout << "Enter the border size: ";
	std::cin >> borderSize;

	for (int i = 0; i < borderSize; i++) {

		for (int j = 0; j < borderSize; j++) {
			if (i == 0 || i == borderSize - 1 || j == 0 || j == borderSize - 1) {
				std::cout << " x";
			} else {
				std::cout << "  ";
			}
		}
		std::cout << '\n';
	}

	return 0;
}
