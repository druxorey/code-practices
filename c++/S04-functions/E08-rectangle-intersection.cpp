#include <iostream>
#include "../U1-libraries/dxinput.hpp"

bool isPointInRectangle(int pointX, int pointY, int rectX, int rectY, int rectWidth, int rectHeight) {
	bool isWithinWidth = pointX >= rectX && pointX <= (rectX + rectWidth);
	bool isWithinHeight = pointY <= rectY && pointY >= (rectY - rectHeight);
	return isWithinWidth && isWithinHeight;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= RECTANGLE INTERSECTION =========]\e[0m\n\n";

	int firstRectX, firstRectY, firstRectWidth, firstRectHeight;
	int secondRectX, secondRectY, secondRectWidth, secondRectHeight;

	getcin("Enter the x vertex position of the first rectangle: ", firstRectX);
	getcin("Enter the y vertex position of the first rectangle: ", firstRectY);
	getcin("Enter the width of the first rectangle: ", firstRectWidth);
	getcin("Enter the height of the first rectangle: ", firstRectHeight);
	getcin("Enter the x vertex position of the second rectangle: ", secondRectX);
	getcin("Enter the y vertex position of the second rectangle: ", secondRectY);
	getcin("Enter the width of the second rectangle: ", secondRectWidth);
	getcin("Enter the height of the second rectangle: ", secondRectHeight);

	bool isTopLeftInSecond = isPointInRectangle(firstRectX, firstRectY, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
	bool isTopRightInSecond = isPointInRectangle(firstRectX + firstRectWidth, firstRectY, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
	bool isBottomLeftInSecond = isPointInRectangle(firstRectX, firstRectY - firstRectHeight, secondRectX, secondRectY, secondRectWidth, secondRectHeight);
	bool isBottomRightInSecond = isPointInRectangle(firstRectX + firstRectWidth, firstRectY - firstRectHeight, secondRectX, secondRectY, secondRectWidth, secondRectHeight);

	if (isTopLeftInSecond || isTopRightInSecond || isBottomLeftInSecond || isBottomRightInSecond) {
		printf("A vertex of the first rectangle is in the second rectangle.\n");
	} else {
		printf("No vertex of the first rectangle is in the second rectangle.\n");
	}

	return 0;
}
