#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= NUMBER ANALYSYS =========]\e[0m\n\n";

	int number, iteration = 0, evenNumbers = 0, oddNumbers = 0, totalNumbers = 0;

	do {
		std::cout << "Enter the number: ";
		std::cin >> number;
		
		totalNumbers += number;
		iteration++;

		if (number % 2 == 0) {
			oddNumbers += number;
		} else {
			evenNumbers += number;
		}

	} while (number != 0);

	float oddPercentage, evenPercentage;

	oddPercentage = ((float)oddNumbers / totalNumbers) * 100;
	evenPercentage = ((float)evenNumbers / totalNumbers) * 100;

	std::cout << '\n';
	std::cout << "The sum of all odd numbers is: " << oddNumbers << '\n';
	std::cout << "The percentage of all even numbers is: " << oddPercentage << "%" << '\n';
	std::cout << "The sum of all even numbers is: " << evenNumbers << '\n';
	std::cout << "The percentage of all even numbers is: " << evenPercentage << "%" << '\n';
	std::cout << "The sum of all numbers is: " << totalNumbers << '\n';
	std::cout << "You enter a total of " << iteration << " numbers."<< '\n';

	return 0;
}
