#include <iostream>

int main(int argc, char *argv[]) {

	std::cout << "\n\e[0;35m[========= LEGAL DATA =========]\e[0m\n\n";

	std::cout << "Enter the following data:\n";

	std::string name;
	std::cout << "\n - Full Name: ";
	std::cin >> name;

	int age;
	std::cout << "\n - Age: ";
	std::cin >> age;

	char gender;
	std::cout << "\n - Gender (M/F): ";
	std::cin >> gender;

	float height;
	std::cout << "\n - Height (m): ";
	std::cin >> height;

	double weight;
	std::cout << "\n - Weight (kg): ";
	std::cin >> weight;

	bool isMarried;
	std::cout << "\n - Are you married? (1/0): ";
	std::cin >> isMarried;

	std::cout << "\nYour full name: " << name << '\n';
	std::cout << "Your age: " << age << '\n';
	std::cout << "Your gender: " << gender << '\n';
	std::cout << "Your height: " << height << "m\n";
	std::cout << "Your weight: " << weight << "kg\n";
	std::cout << "Are you married? " << (isMarried ? "Yes" : "No") << '\n';

	return 0;
}
