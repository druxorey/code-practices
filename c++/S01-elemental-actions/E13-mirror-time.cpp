#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= MIRROR TIME =========]\e[0m\n\n";

	int hour, minute;

	printf("Enter the hour: ");
	std::cin >> hour;
	printf("Enter the minute: ");
	std::cin >> minute;

	int mirrorHour = 11 - hour;
	int mirrorMinute = 60 - minute;

	printf("\n\e[0;32mThe mirror time is: %02d:%02d\e[0m\n\n", mirrorHour, mirrorMinute);

	return 0;
}
