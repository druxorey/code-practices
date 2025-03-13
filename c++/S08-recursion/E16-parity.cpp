#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxarray.hpp"

bool isOdd(int n);
bool isEven(int n);


bool isOdd(int n) {
	if (n == 0) return false;
	return isEven(n - 1);
}


bool isEven(int n) {
	if (n == 0) return true;
	return isOdd(n - 1);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PARITY =========]\e[0m\n\n";

	int a = 0;

	getcin("Enter the first number: ", a);
	printf("\n\e[0;32m%d\e[0m is %s\n", a, isEven(a) ? "even" : "odd");

	return 0;
}
