#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

int multiply(int a, int b) {
	if (b == 0) return 0;
	return a + multiply(a, b - 1);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= RECURSIVE MULTIPLICATION =========]\e[0m\n\n";

	int a = 0, b = 0;

	getInput("Enter the first number: ", a);
	getInput("Enter the second number: ", b);

	printf("\n\e[0;33mThe result of %d * %d is %d\e[0m\n", a, b, multiply(a, b));

	return 0;
}
