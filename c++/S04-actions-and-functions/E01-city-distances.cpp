#include <iostream>
#include <string>

using namespace std;

float convertMilesToKm(float miles) {
	return miles * 1.60934;
}


void printDistance(float distance) {
	cout << "\nThe distance between the two cities is " << distance << " km.\n" << endl;
}


bool askForCity() {
	string initialCity, finalCity;
	float distance;

	cout << "Enter the initial city: ";
	cin >> initialCity;

	cout << "Enter the final city: ";
	cin >> finalCity;

	cout << "Enter the distance between " << initialCity << " and " << finalCity << " in miles: ";
	cin >> distance;

	if (initialCity == finalCity and distance == 0)
		return false;

	printDistance(convertMilesToKm(distance));

	return true;
}


int main() {

    cout << "\n\e[0;35m[========= CITY DISTANCES =========]\e[0m\n" << endl;

	while (true) {
		if (!askForCity())
			break;
	}

    return 0;
}
