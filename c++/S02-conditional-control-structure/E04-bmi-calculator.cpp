#include <iostream>
#include <cmath>

int main() {
	float height = 0, weight = 0, imc = 0, conversion = 0.453592;
	
	std::cout << "\n\e[0;35m[========= BMI CALCULATOR =========]\e[0m\n" << '\n';

	std::cout << "Enter your weight in pounds: ";
	std::cin >> weight;
	std::cout << "Enter your height in centimeters: ";
	std::cin >> height;
	std::cout << '\n';

	weight = weight * conversion;
	height = height / 100;

	imc = weight / pow(height, 2);

	std::cout << weight << "kg -> " << imc << " -> ";

	if (imc < 16) {std::cout << "Entry criteria" << '\n';}
	else if (imc >= 16 && imc < 17) {std::cout << "Underweight" << '\n';}
	else if (imc >= 17 && imc < 18.5) {std::cout << "Under weight" << '\n';}
	else if (imc >= 18.5 && imc < 25) {std::cout << "Normal weight" << '\n';}
	else if (imc >= 25 && imc < 30) {std::cout << "Over weight" << '\n';}
	else if (imc >= 30 && imc < 35) {std::cout << "Premorbid obesity" << '\n';}
	else if (imc >= 40 && imc <= 45) {std::cout << "Morbid obesity" << '\n';}
	else {std::cout << "Hypermorbid obesity" << '\n';}

	return 0;
}
