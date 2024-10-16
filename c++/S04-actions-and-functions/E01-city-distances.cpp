#include <iostream>
#include "../U1-libraries/dxinput.cpp"

float convertMilesToKm(float miles) {
	return miles * 1.60934;
}


void printDistance(float distance) {
	printf("The distance between the two cities is %.2f km.\n\n", distance);
}


bool askForCity() {
	std::string initialCity, finalCity;
	float distance;

	std::cout << "Enter the initial city: ";
	getline(std::cin, initialCity);

	std::cout << "Enter the final city: ";
	getline(std::cin, finalCity);

	getInput("Enter the distance between \e[0;33m" + initialCity + "\e[0m and \e[0;33m" + finalCity + "\e[0m in miles: ", distance);

	if (initialCity == finalCity and distance == 0)
		return false;

	printDistance(convertMilesToKm(distance));

	return true;
}


int main() {

	std::cout << "\n\e[0;35m[========= CITY DISTANCES =========]\e[0m\n" << '\n';

	while (true) {
		if (!askForCity())
			break;
	}

	return 0;
}
