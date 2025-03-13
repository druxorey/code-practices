#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxarray.hpp"

int multiply(int a, int b) {
	if (b == 0) return 0;
	return a + multiply(a, b - 1);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= RECURSIVE MULTIPLICATION =========]\e[0m\n\n";

	int a = 0, b = 0;

	getcin("Enter the first number: ", a);
	getcin("Enter the second number: ", b);

	printf("\n\e[0;33mThe result of %d * %d is %d\e[0m\n", a, b, multiply(a, b));

	return 0;
}
