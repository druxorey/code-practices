#include <iostream>
#include "../U1-libraries/dxinput.cpp"

typedef unsigned long long int ulli;

/* Iterative solution 

ulli getCombinatorics(int n, int k) {
    if (k > n) return -1;
    if (k == 0 || k == n) return 1;

    ulli result = 1;
    if (k > n - k) k = n - k;

    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}
*/

ulli getCombinatorics(int n, int k) {
    if (k == 0 || k == n) return 1;
    return getCombinatorics(n - 1, k - 1) + getCombinatorics(n - 1, k);
}

int main() {
	int n, k;

	std::cout << "\n\e[0;35m[========= INTEGER COMBINATORICS =========]\e[0m\n" << '\n';

	getInput("Enter the value of n: ", n);
	getInput("Enter the value of k: ", k);

	ulli combinatorics = getCombinatorics(n, k);

	printf("The combinatorics of %d and %d is: %lld\n", n, k, combinatorics);

	return 0;
}