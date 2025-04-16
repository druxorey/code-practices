#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= DAYS ELAPSED =========]\e[0m\n\n";

	int inputDay, inputMonth, totalDays = 0;

	std::cout << "Please enter the day (1-31): ";
	std::cin >> inputDay;

	if (inputDay < 1 || inputDay > 31) {
		std::cerr << "\n\e[1;31m[ERROR]\e[0m Invalid day entered. Please run the program again.\n\n";
		return 1;
	}

	std::cout << "Please enter the month (1-12): ";
	std::cin >> inputMonth;

	if (inputMonth < 1 || inputMonth > 12) {
		std::cerr << "\n\e[1;31m[ERROR]\e[0m Invalid month entered. Please run the program again.\n\n";
		return 1;
	}

	switch (inputMonth) {
		case 12: totalDays += 30;
		case 11: totalDays += 31;
		case 10: totalDays += 30;
		case 9: totalDays += 31;
		case 8: totalDays += 31;
		case 7: totalDays += 30;
		case 6: totalDays += 31;
		case 5: totalDays += 30;
		case 4: totalDays += 31;
		case 3: totalDays += 28;
		case 2: totalDays += 31;
		case 1: totalDays += inputDay;
	}

	std::cout << "\n\e[1;32m[RESULT]\e[0m Total days elapsed in the year: " << totalDays << "\n\n";

	return 0;
}
