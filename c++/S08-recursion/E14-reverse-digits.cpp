#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxarray.hpp"

int invertNumber(int number, int inverted = 0) {
	if (number == 0) return inverted;
	return invertNumber(number / 10, (inverted * 10) + (number % 10));
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= REVERSE DIGITS =========]\e[0m\n\n";

	int number;

	getcin("Enter a number: ", number);
	printf("The inverted number is: %d\n", invertNumber(number));

	return 0;
}
