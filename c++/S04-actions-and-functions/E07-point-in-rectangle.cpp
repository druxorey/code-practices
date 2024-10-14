#include <iostream>
#include "../U1-libraries/dxinput.cpp"

bool isInHeight (int yVertex, int yPoint, int height) {
	return (yPoint >= (yVertex - height) && yPoint <= yVertex);
}


bool isInWidth (int xVertex, int xPoint, int width) {
	return (xPoint <= (xVertex + width) && xPoint >= xVertex);
}


int main(){
	int xPoint, yPoint, xVertex, yVertex, height, width; 

	std::cout << "\n\e[0;35m[========= POINT IN RECTANGLE =========]\e[0m\n" << '\n';

	getInput("Enter the x position: ", xPoint);
	getInput("Enter the y position: ", yPoint);
	getInput("Enter the x vertex position: ", xVertex);
	getInput("Enter the y vertex position: ", yVertex);
	getInput("Enter the height: ", height);
	getInput("Enter the width: ", width);

	bool heightValue = isInHeight(yVertex, yPoint, height);
	bool widthValue = isInWidth(xVertex, xPoint, width);

	if (heightValue && widthValue) {
		printf("The point is in the rectangle.\n");
	} else {
		printf("The point is not in the rectangle.\n");
	}

	return 0;
}
