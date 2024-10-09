#include <iostream>

bool isPointInRectangle(int pointX, int pointY, int rectX, int rectY, int rectWidth, int rectHeight) {
	bool isWithinWidth = pointX >= rectX && pointX <= (rectX + rectWidth);
	bool isWithinHeight = pointY <= rectY && pointY >= (rectY - rectHeight);
	return isWithinWidth && isWithinHeight;
}


int main(){
	int firstRectX, firstRectY, firstRectWidth, firstRectHeight;
	int secondRectX, secondRectY, secondRectWidth, secondRectHeight;

	std::cout << "\n\e[0;35m[========= RECTANGLE INTERSECTION =========]\e[0m\n" << '\n';

	std::cout << "Enter the x and y vertex position of the first rectangle: ";
	std::cin >> firstRectX >> firstRectY;
	std::cout << "Enter the width and height of the first rectangle: ";
	std::cin >> firstRectWidth >> firstRectHeight;

	std::cout << "Enter the x and y vertex position of the second rectangle: ";
	std::cin >> secondRectX >> secondRectY;
	std::cout << "Enter the width and height of the second rectangle: ";
	std::cin >> secondRectWidth >> secondRectHeight;

	bool isTopLeftInSecond = isPointInRectangle(firstRectX, firstRectY, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
	bool isTopRightInSecond = isPointInRectangle(firstRectX + firstRectWidth, firstRectY, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
	bool isBottomLeftInSecond = isPointInRectangle(firstRectX, firstRectY - firstRectHeight, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
	bool isBottomRightInSecond = isPointInRectangle(firstRectX + firstRectWidth, firstRectY - firstRectHeight, secondRectX, secondRectY, secondRectWidth, secondRectHeight);

	if (isTopLeftInSecond || isTopRightInSecond || isBottomLeftInSecond || isBottomRightInSecond) {
		std::cout << "A vertex of the first rectangle is in the second rectangle.\n";
	} else {
		std::cout << "No vertex of the first rectangle is in the second rectangle.\n";
	}

	return 0;
}
