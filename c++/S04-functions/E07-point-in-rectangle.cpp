#include <iostream>
#include "../U1-libraries/dxinput.hpp"

bool isInHeight (int yVertex, int yPoint, int height) {
	return (yPoint >= (yVertex - height) && yPoint <= yVertex);
}


bool isInWidth (int xVertex, int xPoint, int width) {
	return (xPoint <= (xVertex + width) && xPoint >= xVertex);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= POINT IN RECTANGLE =========]\e[0m\n\n";

	int xPoint, yPoint, xVertex, yVertex, height, width;

	getcin("Enter the x position: ", xPoint);
	getcin("Enter the y position: ", yPoint);
	getcin("Enter the x vertex position: ", xVertex);
	getcin("Enter the y vertex position: ", yVertex);
	getcin("Enter the height: ", height);
	getcin("Enter the width: ", width);

	bool heightValue = isInHeight(yVertex, yPoint, height);
	bool widthValue = isInWidth(xVertex, xPoint, width);

	if (heightValue && widthValue) {
		printf("The point is in the rectangle.\n");
	} else {
		printf("The point is not in the rectangle.\n");
	}

	return 0;
}
