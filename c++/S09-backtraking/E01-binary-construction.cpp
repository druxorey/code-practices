#include <iostream>
#include "../U1-libraries/dxinput.cpp"

void binary(int n, int &permutations, std::string number="") {
	if (n <= 0) {
		std::cout << permutations + 1 << ": " << number << '\n';
		permutations++;
		return;
	}

	binary(n-1, permutations, number + char(0 + '0'));
	binary(n-1, permutations, number + char(1 + '0'));
}


int main() {
	int size, permutations = 0;

	std::cout << "\n\e[0;35m[========= LETTERS PERMUTATIONS =========]\e[0m\n" << '\n';

	getInput("Enter the string size: ", size);
	binary(size, permutations);
	printf("\n\e[0;32mTotal permutations: %d\e[0m\n", permutations);

	return 0;
}