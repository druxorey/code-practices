#include <iostream>
#include <string>

float convertMilesToKm(float miles) {
	return miles * 1.60934;
}


void printDistance(float distance) {
	std::cout << "\nThe distance between the two cities is " << distance << " km.\n" << '\n';
}


bool askForCity() {
	std::string initialCity, finalCity;
	float distance;

	std::cout << "Enter the initial city: ";
	std::cin >> initialCity;

	std::cout << "Enter the final city: ";
	std::cin >> finalCity;

	std::cout << "Enter the distance between " << initialCity << " and " << finalCity << " in miles: ";
	std::cin >> distance;

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
