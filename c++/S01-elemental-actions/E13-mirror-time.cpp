#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= MIRROR TIME =========]\e[0m\n\n";

	int hour, minute;

	std::cout << "Enter the hour: ";
	std::cin >> hour;
	std::cout << "Enter the minutes: ";
	std::cin >> minute;

	int mirrorHour = 11 - hour;
	int mirrorMinute = 60 - minute;

	printf("\n\e[1;32m[RESULT]\e[0m The mirror time is: \e[0;32m%02d:%02d\e[0m\n\n", mirrorHour, mirrorMinute);

	return 0;
}
