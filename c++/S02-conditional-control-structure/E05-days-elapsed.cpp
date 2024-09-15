#include <iostream>

using namespace std;

int main() {
	int inputDay, inputMonth, totalDays = 0;

    cout << "\n\e[0;35m[========= DAYS ELAPSED =========]\e[0m\n" << endl;

	cout << "Enter the day: ";
	cin >> inputDay;

	cout << "Enter the month: ";
	cin >> inputMonth;

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
			cout << "Invalid month." << endl;
			return 1;
	}

	printf("\nTotal days elapsed: %d\n", totalDays);

	return 0;
}
