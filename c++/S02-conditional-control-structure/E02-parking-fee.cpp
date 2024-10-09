#include <iostream>

int main() {
	int initialHour, initialMinutes, finalHour, finalMinutes, totalMinutes, displayedHours, displayedMinutes;
	float basicAmount = 80, extraAmount = 100, totalPayment;
	
	std::cout << "\n\e[0;35m[========= PARKING FEE =========]\e[0m\n" << '\n';

	std::cout << "Enter the initial hour: ";
	std::cin >> initialHour;
	std::cout << "Enter the initial minutes: ";
	std::cin >> initialMinutes;
	std::cout << '\n';

	std::cout << "Enter the final hour: ";
	std::cin >> finalHour;
	std::cout << "Enter the final minutes: ";
	std::cin >> finalMinutes;
	std::cout << '\n';
	
	totalMinutes = (finalHour * 60 + finalMinutes) - (initialHour * 60 + initialMinutes);

	if (totalMinutes <= 60 and totalMinutes > 0) {
		totalPayment = (float)totalMinutes * 100 / 60;
		std::cout << "You delayed " << totalMinutes << " minutes. The amount to be paid is a total of Bs." << totalPayment << '\n';

	} else {
		if (totalMinutes <= 0) {totalMinutes = 24 * 60 - abs(totalMinutes);}

		totalPayment = (((float)totalMinutes - 60) * 80 / 60) + 100;
		displayedHours = totalMinutes / 60;
		displayedMinutes = totalMinutes % 60; 

		std::cout << "You delayed " << displayedHours << " hours and " << displayedMinutes << " minutes. The amount to be paid is a total of Bs." << totalPayment << '\n';
	}

	return 0;
}
