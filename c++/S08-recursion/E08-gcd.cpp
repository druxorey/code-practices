#include <iostream>
#include "../U1-libraries/dxinput.cpp"

int getGcd(int a, int b) {
	if (a == b) return a;
	if (a > b) return getGcd(a - b, b);
	return getGcd(a, b - a);
}


int main() {
	int a = 0, b = 0;
	
	std::cout << "\n\e[0;35m[========= GCD =========]\e[0m\n" << '\n';

	getInput("Enter first number: ", a);
	getInput("Enter second number: ", b);

	printf("\n\e[0;32mGCD of %d and %d is: %d\e[0m\n", a, b, getGcd(a, b));

	return 0;
}