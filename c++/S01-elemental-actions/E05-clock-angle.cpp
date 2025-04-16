#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= CLOCK ANGLE =========]\e[0m\n\n";

	float hourHand, minuteHand;

	std::cout << "Enter the hour hand position (0-12): ";
	std::cin >> hourHand;
	std::cout << "Enter the minute hand position (0-59): ";
	std::cin >> minuteHand;

	float hourAngle, minuteAngle, finalAngle;

	hourAngle = hourHand * 30;
	minuteAngle = minuteHand * 6;
	finalAngle = abs((hourAngle + (minuteAngle / 12)) - minuteAngle);

	std::cout << "\n\e[1;32m[RESULT]\e[0m The angle between the clock hands is: " << finalAngle << " degrees.\n\n";

	return 0;
}
