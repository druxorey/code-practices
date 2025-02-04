#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PARKING FEE =========]\e[0m\n\n";

	int initialHour, initialMinutes, finalHour, finalMinutes, totalMinutes, displayedHours, displayedMinutes;
	float basicFee = 80, extraFee = 100, totalPayment;
	
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

	if (totalMinutes <= 60 && totalMinutes > 0) {
		totalPayment = (float)totalMinutes * basicFee / 60;
		std::cout << "You delayed \e[0;32m" << totalMinutes << " minutes\e[0m.\n";
		std::cout << "The amount to be paid is a total of\e[0;32m Bs. " << totalPayment << "\e[0m\n";

	} else {
		if (totalMinutes <= 0) totalMinutes = 1440 - abs(totalMinutes);

		totalPayment = (((float)totalMinutes - 60) * extraFee / 60) + basicFee;
		displayedHours = totalMinutes / 60;
		displayedMinutes = totalMinutes % 60;

		std::cout << "You delayed\e[0;33m " << displayedHours << " hours\e[0m and\e[0;33m " << displayedMinutes << " minutes\e[0m.\n";
		std::cout << "The amount to be paid is a total of\e[0;32m Bs. " << totalPayment << "\e[0m\n";
	}

	return 0;
}
