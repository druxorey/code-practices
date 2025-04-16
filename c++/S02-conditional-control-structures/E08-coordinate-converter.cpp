#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= COORDINATE CONVERTER =========]\e[0m\n\n";

	short choice;
	double x, y, r, theta;

    std::cout << "1. Cartesian to Polar\n";
    std::cout << "2. Polar to Cartesian\n";
    std::cout << "Choose the conversion type (1 or 2): ";
	std::cin >> choice;

	if (choice == 1) {
        std::cout << "\nEnter the x and y coordinates separated by a space: ";
        std::cin >> x >> y;

		r = sqrt(pow(x, 2) + pow(y, 2));
		theta = atan(y / x);

		printf("\e[1;32m[RESULT]\e[0m The polar coordinates are: (%.2f, %.2f)\n\n", r, theta);

	} else if (choice == 2) {
        std::cout << "\nEnter the r and theta coordinates separated by a space: ";
        std::cin >> r >> theta;

		x = r * cos(theta);
		y = r * sin(theta);

		printf("\e[1;32m[RESULT]\e[0m The cartesian coordinates are: (%.2f, %.2f)\n\n", x, y);

	} else {
		printf("\n\e[1;31m[ERROR]\e[0m Invalid choice!\n\n");
	}

	return 0;
}
