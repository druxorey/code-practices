#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SEGMENT LENGHT =========]\e[0m\n\n";

	double x1, y1, x2, y2;

	printf("Enter the coordinates of the first point (x, y): ");
	std::cin >> x1 >> y1;

	printf("Enter the coordinates of the second point (x, y): ");
	std::cin >> x2 >> y2;

	double lenght = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2));
	double xHalf = ((x1 - x2) / 2) + x1;
	double tHalf = ((y1 - y2) / 2) + y1;

	printf("The lenght of the segment is: \e[0;32m%.2f\e[0m\n", lenght);
	printf("The middle point of the segment is: \e[0;32m(%.2f, %.2f)\e[0m\n", xHalf, tHalf);

	return 0;
}
