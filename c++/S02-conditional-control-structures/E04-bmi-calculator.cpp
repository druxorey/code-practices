#include <iostream>
#include <cmath>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= BMI CALCULATOR =========]\e[0m\n\n";

	double CONVERSION_FACTOR_TO_KG = 0.453592;

	float height = 0, weight = 0, imc = 0;
	
	std::cout << "Please enter the following data: \n\n";
	std::cout << " - Your weight in pounds (e.g., 150): ";
	std::cin >> weight;
	std::cout << " - Your height in centimeters (e.g., 170): ";
	std::cin >> height;

	weight *= CONVERSION_FACTOR_TO_KG;
	height /= 100;

	imc = weight / pow(height, 2);

	std::cout << "\n\e[0;34mCOLLECTED DATA\e[0m\n\n";

	std::cout << " - Your weight in kilograms: " << weight << " kg\n";
	std::cout << " - Your BMI: " << imc << "\n";
	std::cout << " - Category: ";

	if (imc < 16) std::cout << "\e[1;31mEntry criteria\e[0m\n";
	else if (imc >= 16.0 && imc < 17.0) std::cout << "\e[1;33mSubweight\e[0m\n";
	else if (imc >= 17.0 && imc < 18.5) std::cout << "\e[1;33mUnder weight\e[0m\n";
	else if (imc >= 18.5 && imc < 25.0) std::cout << "\e[1;32mNormal weight\e[0m\n";
	else if (imc >= 25.0 && imc < 30.0) std::cout << "\e[1;33mOver weight\e[0m\n";
	else if (imc >= 30.0 && imc < 35.0) std::cout << "\e[1;31mPremorbid obesity\e[0m\n";
	else if (imc >= 40.0 && imc <= 45.0) std::cout << "\e[1;31mMorbid obesity\e[0m\n";
	else std::cout << "\e[1;31mHypermorbid obesity\e[0m\n";

	std::cout << '\n';

	return 0;
}
