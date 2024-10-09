#include <iostream>

int monthToDays(int month) {
	switch (month) {
		case 1:
			return 0;
		case 2:
			return 31;
		case 3:
			return 59;
		case 4:
			return 90;
		case 5:
			return 120;
		case 6:
			return 151;
		case 7:
			return 181;
		case 8:
			return 212;
		case 9:
			return 243;
		case 10:
			return 273;
		case 11:
			return 304;
		case 12:
			return 334;
		default:
			return -1;
	}
}


int main() {
	int month, totalDays;

	std::cout << "\n\e[0;35m[========= DAYS TO MONTH =========]\e[0m\n" << '\n';

	std::cout << "Enter the month number: ";
	std::cin >> month;

	totalDays = monthToDays(month);

	if (totalDays == -1) {
		std::cout << "Invalid month." << '\n';
		return 1;
	}

	std::cout << "Has passed " << totalDays << " days." << '\n';

	return 0;
}
