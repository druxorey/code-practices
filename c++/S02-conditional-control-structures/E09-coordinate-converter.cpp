#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= COORDINATE CONVERTER =========]\e[0m\n\n";

	short choice;
	double x, y, r, theta;

	printf("1. Cartesian to Polar\n");
	printf("2. Polar to Cartesian\n");
	printf("Choose the conversion type:\n");

	std::cin >> choice;

	if (choice == 1) {
		printf("Enter the x and y coordinates: ");
		std::cin >> x >> y;

		r = sqrt(pow(x, 2) + pow(y, 2));
		theta = atan(y / x);

		printf("The polar coordinates are: (%.2f, %.2f)\n", r, theta);

	} else if (choice == 2) {
		printf("Enter the r and theta coordinates: ");
		std::cin >> r >> theta;

		x = r * cos(theta);
		y = r * sin(theta);

		printf("The cartesian coordinates are: (%.2f, %.2f)\n", x, y);

	} else {
		printf("Invalid choice!\n");
	}

	return 0;
}
