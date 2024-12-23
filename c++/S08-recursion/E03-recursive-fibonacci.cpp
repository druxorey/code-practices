#include <iostream>
#include <unordered_map>
#include "../U1-libraries/dxinput.cpp"

typedef unsigned long long int ulli;

ulli getFibonnacci(ulli n, std::unordered_map<ulli, ulli>& memo) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (memo.find(n) != memo.end()) return memo[n];

	memo[n] = getFibonnacci(n - 1, memo) + getFibonnacci(n - 2, memo);

	return memo[n];
}

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= RECURSIVE FIBONACCI =========]\e[0m\n\n";

	ulli number, fibonacci;
	std::unordered_map<ulli, ulli> memo;

	getInput("Enter a number: ", number);

	if (number > 199) {
		printf("Fibonacci of %lld is too large to be calculated\n", number);
		return 1;
	}

	printf("Fibonacci of %lld is %lld\n", number, getFibonnacci(number, memo));

	return 0;
}
