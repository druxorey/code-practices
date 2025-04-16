#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= CYLINDRICAL CONVERSION =========]\e[0m\n\n";

	double xCartesian, yCartesian, zCartesian;

	printf("Enter the Cartesian coordinates (x, y, z): ");
	std::cin >> xCartesian >> yCartesian >> zCartesian;

	double cylindricalRadius = sqrt((xCartesian * xCartesian) + (yCartesian * yCartesian));
	double cylindricalAngle = atan(yCartesian / xCartesian);
	double cylindricalHeight = zCartesian;

	double sphericalRadius = sqrt((xCartesian * xCartesian) + (yCartesian * yCartesian) + (zCartesian * zCartesian));
	double sphericalAngle = cylindricalAngle;
	double sphericalHeight = acos(zCartesian / sphericalRadius);

	printf("\n\e[1;32m[RESULT]\e[0m The coordinates in different systems are:\n");
	printf(" - Cylindrical Coordinates: r = \e[0;32m%.4f\e[0m, θ = \e[0;32m%.4f\e[0m, z = \e[0;32m%.4f\e[0m\n", cylindricalRadius, cylindricalAngle, cylindricalHeight);
	printf(" - Spherical Coordinates: r = \e[0;32m%.4f\e[0m, θ = \e[0;32m%.4f\e[0m, φ = \e[0;32m%.4f\e[0m\n", sphericalRadius, sphericalAngle, sphericalHeight);

	return 0;
}
