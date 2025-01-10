#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= CLOCK ANGLE =========]\e[0m\n\n";

	float hourHand, minuteHand;

	std::cout << "Enter the clock hour hand: ";
	std::cin >> hourHand;
	std::cout << "Enter the clock minute hand: ";
	std::cin >> minuteHand;

	float hourAngle, minuteAngle, finalAngle;

	hourAngle = hourHand * 30;
	minuteAngle = minuteHand * 6;
	finalAngle = abs((hourAngle + (minuteAngle / 12)) - minuteAngle);

	std::cout << "The angle between both hand's is " << finalAngle << " degrees." << '\n';

	return 0;
}
