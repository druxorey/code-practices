#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= NESTED SQUARE =========]\e[0m\n\n";

	int squarePattern, borderSize;

	std::cout << "1- Chess.\n2- Dots.\n3- Fractal.\n" << '\n';
	std::cout << "Select the square pattern: ";
	std::cin >> squarePattern;
	
	do {
		std::cout << "Enter the border size [odd number]: ";
		std::cin >> borderSize;
	} while (borderSize % 2 == 0);
	
	std::cout << '\n';

	if (squarePattern == 1){

		for (int i = 0; i < borderSize; i++) {

			for (int j = 0; j < borderSize; j++) {
				if (i % 2 == 0 || i == borderSize - 1 || j % 2 == 0 || j == borderSize - 1) {
					std::cout << " x";
				} else {
					std::cout << "  ";
				}
			}
			std::cout << '\n';
		}

	} else if (squarePattern == 2) {

		for (int i = 0; i < borderSize; i++) {

			for (int j = 0; j < borderSize; j++) {
				if (i == 0 || j == 0 || i == borderSize - 1 || j == borderSize - 1) {
					std::cout << " x";
				} else if (i % 2 == 0 && j % 2 == 0) {
					std::cout << " o";
				} else {
					std::cout << "  ";
				}
			}
			std::cout << '\n';
		}

	} else if (squarePattern == 3) {

		for (int i = 0; i < borderSize; i++) {
			int yDistance = abs(i - (borderSize - 1) / 2);

			for (int j = 0; j < borderSize; j++) {
				int xDistance = abs(j - (borderSize - 1) / 2);

				if (i == 0 || j == 0 || i == borderSize - 1 || j == borderSize - 1) {
					std::cout << " x";
				} else if ((yDistance % 2 == 0 && yDistance >= xDistance) || (xDistance % 2 == 0 && xDistance >= yDistance)){
					std::cout << " o";
				} else {
					std::cout << "  ";
				}
			}
			std::cout << '\n';
		}
	}

	return 0;
}
