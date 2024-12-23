#include <iostream>
#include <cmath>

struct dot {
	float x = 0;
	float y = 0;
	float z = 0;
};


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= POINT DISTANCE =========]\e[0m\n\n";

	dot dots[2];

	for (int i = 0; i < 2; i++) {
		int coorditate;
		std::cout << "Enter coorditates for the dot number " << i+1 << ": " << '\n';
		std::cin >> coorditate;
		dots[i].x = coorditate;
		std::cin >> coorditate;
		dots[i].y = coorditate;
		std::cin >> coorditate;
		dots[i].z = coorditate;
	}

	float firstCalc, secondCalc, thirdCalc;

	firstCalc =  pow((dots[0].x - dots[1].x),2);
	secondCalc =  pow((dots[0].y - dots[1].y),2);
	thirdCalc =  pow((dots[0].z - dots[1].z),2);

	std::cout << "The distance between the points is: " << sqrt(firstCalc + secondCalc + thirdCalc) << '\n';

	return 0;
}
