#include <iostream>
#include "../U1-libraries/dxinput.cpp"

void chessPattern(int borderSize) {
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
}


void dotsPattern(int borderSize) {
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
}


void fractalPattern(int borderSize) {
	int isEven = ( ((borderSize - 1) / 2) % 2 == 0 ) ? 0 : 1;

	for (int i = 0; i < borderSize; i++) {
		int yDistance = abs(i - (borderSize - 1) / 2);

		for (int j = 0; j < borderSize; j++) {
			int xDistance = abs(j - (borderSize - 1) / 2);

			if (i == 0 || j == 0 || i == borderSize - 1 || j == borderSize - 1) {
				std::cout << " x";
			} else if ((yDistance % 2 == isEven && yDistance >= xDistance) || (xDistance % 2 == isEven && xDistance >= yDistance)){
				std::cout << " o";
			} else {
				std::cout << "  ";
			}
		}
		std::cout << '\n';
	}
}


int main(int argc, char *argv[]) {
	int squarePattern, borderSize;

	do {
		system("clear");
		std::cout << "\n\e[0;35m[========= NESTED SQUARE =========]\e[0m\n\n";

		std::cout << "  1 - Chess\n  2 - Dots\n  3 - Fractal\n" << '\n';
		std::cout << "Select the square pattern: ";
		getcin("", squarePattern);
	
		std::cout << "Enter the border size \e[0;33m[odd number]\e[0m: ";
		getcin("", borderSize);
	} while (borderSize % 2 == 0);
	
	std::cout << '\n';

	switch (squarePattern) {
		case 1:
			chessPattern(borderSize);
			break;
		case 2:
			dotsPattern(borderSize);
			break;
		case 3:
			fractalPattern(borderSize);
			break;
		default:
			std::cout << "Invalid option.";
			break;
	}

	std::cout << '\n';

	return 0;
}
