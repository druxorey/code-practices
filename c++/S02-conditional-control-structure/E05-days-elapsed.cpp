#include <iostream>

int main() {
	int inputDay, inputMonth, totalDays = 0;

	std::cout << "\n\e[0;35m[========= DAYS ELAPSED =========]\e[0m\n" << '\n';

	std::cout << "Enter the day: ";
	std::cin >> inputDay;

	std::cout << "Enter the month: ";
	std::cin >> inputMonth;

	switch (inputMonth) {
		case 12:
			totalDays += 30;
		case 11:
			totalDays += 31;
		case 10:
			totalDays += 30;
		case 9:
			totalDays += 31;
		case 8:
			totalDays += 31;
		case 7:
			totalDays += 30;
		case 6:
			totalDays += 31;
		case 5:
			totalDays += 30;
		case 4:
			totalDays += 31;
		case 3:
			totalDays += 28;
		case 2:
			totalDays += 31;
		case 1:
			totalDays += inputDay;
			break;
		default:
			std::cout << "Invalid month." << '\n';
			return 1;
	}

	printf("\nTotal days elapsed: %d\n", totalDays);

	return 0;
}
