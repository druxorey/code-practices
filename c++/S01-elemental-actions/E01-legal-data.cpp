#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= LEGAL DATA =========]\e[0m\n\n";

	std::cout << "Enter the following data:\n";

	std::string name;
	std::cout << " - Full Name: ";
	getline(std::cin, name);

	int age;
	std::cout << " - Age: ";
	std::cin >> age;

	char gender;
	std::cout << " - Gender (M/F): ";
	std::cin >> gender;

	float height;
	std::cout << " - Height (m): ";
	std::cin >> height;

	double weight;
	std::cout << " - Weight (kg): ";
	std::cin >> weight;

	bool isMarried;
	std::cout << " - Are you married? (1/0): ";
	std::cin >> isMarried;

	std::cout << "\n\e[0;35mCOLLECTED DATA\e[0m\n\n";

	std::cout << "Your full name:     \e[0;32m" << name << "\e[0m\n";
	std::cout << "Your age:           \e[0;32m" << age << "\e[0m\n";
	std::cout << "Your gender:        \e[0;32m" << gender << "\e[0m\n";
	std::cout << "Your height:        \e[0;32m" << height << "m\e[0m\n";
	std::cout << "Your weight:        \e[0;32m" << weight << "kg\e[0m\n";
	std::cout << "Are you married?:   \e[0;32m" << (isMarried ? "Yes" : "No") << "\e[0m\n";

	return 0;
}
