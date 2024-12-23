#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= LINE INTERSECTION =========]\e[0m\n\n";

	float m1, b1, m2, b2, xIntersection, yIntersection;

	std::cout << "Enter values for the first line (m1x+b1): ";
	std::cin >> m1 >> b1;
	std::cout << "Enter values for the second line (m2x+b2): ";
	std::cin >> m2 >> b2;

	xIntersection = (b2 - b1) / (m1 - m2);
	yIntersection = m1 * xIntersection + b1;

	std::cout << "The intersection is: (" << xIntersection << "," << yIntersection << ")" << '\n';

	return 0;
}
