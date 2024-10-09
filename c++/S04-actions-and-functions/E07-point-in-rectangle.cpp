#include <iostream>

bool isInHeight (int yVertex, int yPoint, int height) {
	return (yPoint >= (yVertex - height) && yPoint <= yVertex);
}


bool isInWidth (int xVertex, int xPoint, int width) {
	return (xPoint <= (xVertex + width) && xPoint >= xVertex);
}


int main(){
	int xPoint, yPoint, xVertex, yVertex, height, width; 

	std::cout << "\n\e[0;35m[========= POINT IN RECTANGLE =========]\e[0m\n" << '\n';

	printf("Enter the x and y position: ");
	std::cin >> xPoint >> yPoint;
	printf("Enter the x and y vertex position: ");
	std::cin >> xVertex >> yVertex;
	printf("Enter the height: ");
	std::cin >> height;
	printf("Enter the width: ");
	std::cin >> width;

	bool heightValue = isInHeight(yVertex, yPoint, height);
	bool widthValue = isInWidth(xVertex, xPoint, width);

	if (heightValue && widthValue) {
		printf("The point is in the rectangle.\n");
	} else {
		printf("The point is not in the rectangle.\n");
	}

	return 0;
}
