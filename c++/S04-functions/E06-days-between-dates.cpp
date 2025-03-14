#include <iostream>
#include "../U1-libraries/dxinput.hpp"

int daysByMonth(int month) {
	int days = 0;

	for (int i = 1; i < month; i++) {
		if (i == 2) { days += 28;}
		else {days += (i == 4 || i == 6 || i == 9 || i == 11)? 30: 31;}
	}

	return days;
}


int daysByYear(int year) {
	int days = year * 365;
	days = (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))? days += 1 : days += 0;
	return days;
}


int daysDifference(int firstDate, int secondDate) {
	int firstTotal = 0, secondTotal = 0;
	firstTotal += firstDate / 1000000;
	secondTotal += secondDate / 1000000;

	firstTotal += daysByMonth(firstDate / 10000 % 100);
	secondTotal += daysByMonth(secondDate / 10000 % 100);

	firstTotal += daysByYear(firstDate % 10000);
	secondTotal += daysByYear(secondDate % 10000);

	return abs(firstTotal - secondTotal);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= DAYS BETWEEN DATES =========]\e[0m\n\n";

	int firstDate, secondDate;

	getcin("Enter the first date [DDMMYYYY]: ", firstDate);
	getcin("Enter the second date [DDMMYYYY]: ", secondDate);

	printf("The difference is %i days.\n", daysDifference(firstDate, secondDate));

	return 0;
}
