#include <iostream>
#include "../U1-libraries/dxinput.cpp"

bool isPointInRectangle(int pointX, int pointY, int rectX, int rectY, int rectWidth, int rectHeight) {
	bool isWithinWidth = pointX >= rectX && pointX <= (rectX + rectWidth);
	bool isWithinHeight = pointY <= rectY && pointY >= (rectY - rectHeight);
	return isWithinWidth && isWithinHeight;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= RECTANGLE INTERSECTION =========]\e[0m\n\n";

	int firstRectX, firstRectY, firstRectWidth, firstRectHeight;
	int secondRectX, secondRectY, secondRectWidth, secondRectHeight;

	std::cout << "\n\e[0;35m[=========  =========]\e[0m\n" << '\n';

	getInput("Enter the x vertex position of the first rectangle: ", firstRectX);
	getInput("Enter the y vertex position of the first rectangle: ", firstRectY);
	getInput("Enter the width of the first rectangle: ", firstRectWidth);
	getInput("Enter the height of the first rectangle: ", firstRectHeight);
	getInput("Enter the x vertex position of the second rectangle: ", secondRectX);
	getInput("Enter the y vertex position of the second rectangle: ", secondRectY);
	getInput("Enter the width of the second rectangle: ", secondRectWidth);
	getInput("Enter the height of the second rectangle: ", secondRectHeight);

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
