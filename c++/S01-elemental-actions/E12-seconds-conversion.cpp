#include <iostream>
#define ulli unsigned long long int

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SECONDS CONVERSION =========]\e[0m\n\n";

	ulli seconds, minutes, hours, days, weeks, months, years;

	std::cout << "Enter the seconds: ";
	std::cin >> seconds;

	minutes = seconds / 60;
	hours = minutes / 60;
	days = hours / 24;
	weeks = days / 7;
	months = days / 30;
	years = days / 365;

	std::cout << "\n\e[0;32m[+] \e[0mSeconds: " << seconds << '\n';
	std::cout << "\e[0;32m[+] \e[0mMinutes: " << minutes << '\n';
	std::cout << "\e[0;32m[+] \e[0mHours: " << hours << '\n';
	std::cout << "\e[0;32m[+] \e[0mDays: " << days << '\n';
	std::cout << "\e[0;32m[+] \e[0mWeeks: " << weeks << '\n';
	std::cout << "\e[0;32m[+] \e[0mMonths: " << months << '\n';
	std::cout << "\e[0;32m[+] \e[0mYears: " << years << "\n\n";

	return 0;
}
