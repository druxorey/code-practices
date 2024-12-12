#include <iostream>
#include "../U1-libraries/dxinput.cpp"

double getPower(double base, int exponent) {
	if (exponent == 0) return 1;
	if (exponent > 0 && exponent % 2 == 1) return base * getPower(base, exponent -1);
	return getPower(base * base, exponent / 2);
}


int main() {
	double base = 0.0;
	unsigned int exponent = 0;

	std::cout << "\n\e[0;35m[========= POWER =========]\e[0m\n" << '\n';

	getInput("Enter the base: ", base);
	getInput("Enter the exponent: ", exponent);

	printf("\e[0;32m%.2f raised to the power of %d is %.4f\e[0m\n", base, exponent, getPower(base, exponent));

	return 0;
}
