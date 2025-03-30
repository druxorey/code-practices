#include <iostream>
#define ulli unsigned long long int

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SECONDS CONVERSION =========]\e[0m\n\n";

	ulli seconds, minutes, hours, days, weeks, months, years;

	printf("Enter the seconds: ");
	std::cin >> seconds;

	minutes = seconds / 60;
	hours = minutes / 60;
	days = hours / 24;
	weeks = days / 7;
	months = days / 30;
	years = days / 365;

	printf("\n\e[0;32m[+] \e[0mSeconds: %llu\n", seconds);
	printf("\e[0;32m[+] \e[0mMinutes: %llu\n", minutes);
	printf("\e[0;32m[+] \e[0mHours: %llu\n", hours);
	printf("\e[0;32m[+] \e[0mDays: %llu\n", days);
	printf("\e[0;32m[+] \e[0mWeeks: %llu\n", weeks);
	printf("\e[0;32m[+] \e[0mMonths: %llu\n", months);
	printf("\e[0;32m[+] \e[0mYears: %llu\n", years);

	return 0;
}
