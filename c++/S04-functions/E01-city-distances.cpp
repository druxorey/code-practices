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

	getcin("Enter the initial city: ", initialCity);
	getcin("Enter the final city: ", finalCity);
	getcin("Enter the distance between \e[0;33m" + initialCity + "\e[0m and \e[0;33m" + finalCity + "\e[0m in miles: ", distance);

	if (initialCity == finalCity && distance == 0)
		return false;

	printDistance(convertMilesToKm(distance));

	return true;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= CITY DISTANCES =========]\e[0m\n\n";

	while (true) {
		if (!askForCity()) break;
	}

	return 0;
}
