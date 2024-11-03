#include <iostream>
#include <unordered_map>
#include "../U1-libraries/dxinput.cpp"

typedef unsigned long long int ulli;

std::unordered_map<ulli, ulli> memo;

ulli getFactorial(ulli n) {
	if (n == 0) return 1;
	if (memo.find(n) != memo.end()) return memo[n];
	memo[n] = n * getFactorial(n - 1);
	return memo[n];
}

int main() {
	short int number;
	ulli factorial;

	std::cout << "\n\e[0;35m[========= FACTORIAL =========]\e[0m\n" << '\n';

	getInput("Enter a number: ", number);

	if (number < 0) {
		printf("Factorial of %d is undefined\n", number);
		return 1;
	}

	if (number >= 21) {
		printf("Factorial of %d is too large to be calculated\n", number);
		return 0;
	}

	printf("Factorial of %d is %lld\n", number, getFactorial(number));

	return 0;
}
