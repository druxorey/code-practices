#include <iostream>
#include "../U1-libraries/dxinput.cpp"

unsigned long long getCombinatorics(int n, int k) {
    if (k > n) return -1;
    if (k == 0 || k == n) return 1;

    unsigned long long result = 1;
    if (k > n - k) k = n - k;

    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}


int main() {
	int n, k;

	std::cout << "\n\e[0;35m[========= INTEGER COMBINATORICS =========]\e[0m\n" << '\n';

	getInput("Enter the value of n: ", n);
	getInput("Enter the value of k: ", k);

	unsigned long long int combinatorics = getCombinatorics(n, k);

	printf("The combinatorics of %d and %d is: %lld\n", n, k, combinatorics);

	return 0;
}
