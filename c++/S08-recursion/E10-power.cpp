#include <iostream>
#include "../U1-libraries/dxinput.hpp"

double getPower(double base, int exponent) {
	if (exponent == 0) return 1;
	if (exponent > 0 && exponent % 2 == 1) return base * getPower(base, exponent -1);
	return getPower(base * base, exponent / 2);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= POWER =========]\e[0m\n\n";

	double base = 0.0;
	unsigned int exponent = 0;

	getcin("Enter the base: ", base);
	getcin("Enter the exponent: ", exponent);

	printf("\e[0;32m%.2f raised to the power of %d is %.4f\e[0m\n", base, exponent, getPower(base, exponent));

	return 0;
}
