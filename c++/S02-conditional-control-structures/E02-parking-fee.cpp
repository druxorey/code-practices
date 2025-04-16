#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PARKING FEE =========]\e[0m\n\n";

	float BASIC_FEE = 80, EXTRA_FEE = 100;

	int initialHour, initialMinutes, finalHour, finalMinutes, totalMinutes, displayedHours, displayedMinutes;
	float totalPayment;
	
	std::cout << "Enter the initial time (HH MM): ";
	std::cin >> initialHour >> initialMinutes;

	std::cout << "Enter the final time (HH MM): ";
	std::cin >> finalHour >> finalMinutes;

	if (initialHour < 0 || initialHour > 23 || initialMinutes < 0 || initialMinutes > 59) {
		std::cout << "\n\e[1;31m[ERROR]\e[0m Invalid initial time.\n\n";
		return 1;
	}
	
	totalMinutes = (finalHour * 60 + finalMinutes) - (initialHour * 60 + initialMinutes);

	std::cout << "\n\e[0;34mFINAL FEE RESULT\e[0m\n\n";

	if (totalMinutes <= 60 && totalMinutes > 0) {
		totalPayment = (float)totalMinutes * BASIC_FEE / 60;
		std::cout << "Time parked:\e[0;33m " << totalMinutes << " minutes\e[0m.\n";
		std::cout << "The amount to pay:\e[0;32m Bs." << totalPayment << "\e[0m.\n";

	} else {
		if (totalMinutes <= 0) totalMinutes = 1440 - abs(totalMinutes);

		totalPayment = (((float)totalMinutes - 60) * EXTRA_FEE / 60) + BASIC_FEE;
		displayedHours = totalMinutes / 60;
		displayedMinutes = totalMinutes % 60;

		std::cout << "Time parked:\e[0;33m " << displayedHours << " hours\e[0m and\e[0;33m " << displayedMinutes << " minutes\e[0m.\n";
		std::cout << "The amount to pay:\e[0;32m Bs." << totalPayment << "\e[0m.\n";
	}
	std::cout << '\n';

	return 0;
}
