#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= TRIANGLE TYPE =========]\e[0m\n\n";

	int firstX, secondX, thirdX, firstY, secondY, thirdY;

	printf("Enter the first point (x y): ");
	std::cin >> firstX >> firstY;
	printf("Enter the second point (x y): ");
	std::cin >> secondX >> secondY;
	printf("Enter the third point (x y): ");
	std::cin >> thirdX >> thirdY;

	if ((firstX == secondX && secondX == thirdX) ||
		(firstY == secondY && secondY == thirdY)) {
		std::cout << "\n\e[0;31m[ERROR]\e[0m: The points are in a straight line.\n";
		return 1;
	}

	float firstSide = sqrt( pow((secondX - firstX), 2) + pow((secondY - firstY), 2) );
	float secondSide = sqrt( pow((thirdX - secondX), 2) + pow((thirdY - secondY), 2) );
	float thirdSide = sqrt( pow((firstX - thirdX), 2) + pow((firstY - thirdY), 2) );

	bool isRectangle = false;

	if (pow(firstSide, 2) == pow(secondSide, 2) + pow(thirdSide, 2) ||
		pow(secondSide, 2) == pow(firstSide, 2) + pow(thirdSide, 2) ||
		pow(thirdSide, 2) == pow(firstSide, 2) + pow(secondSide, 2)) {
		isRectangle = true;
	}

	if (isRectangle) {
		std::cout << "\n\e[0;32m[RESULT]\e[0m: The triangle is \e[0;32mRectangle\e[0m.\n";
	} else if (firstSide == secondSide && secondSide == thirdSide) {
		std::cout << "\n\e[0;32m[RESULT]\e[0m: The triangle is \e[0;32mEquilateral\e[0m.\n";
	} else if (firstSide == secondSide || secondSide == thirdSide || firstSide == thirdSide) {
		std::cout << "\n\e[0;32m[RESULT]\e[0m: The triangle is \e[0;32mIsosceles\e[0m.\n";
	} else {
		std::cout << "\n\e[0;32m[RESULT]\e[0m: The triangle is \e[0;32mScalene\e[0m.\n";
	}

	printf("\n");

	return 0;
}
