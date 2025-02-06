#include <iostream>
#include <cmath>
#include "../U1-libraries/dxinput.cpp"

typedef unsigned long long int ulli;

double nilakanthaPiAproximation(ulli n) {
    double pi = 3.0;
    for (ulli k = 1; k < n; ++k) {
        double term = 4.0 * pow(-1, k + 1) / ((2 * k) * (2 * k + 1) * (2 * k + 2));
        pi += term;
		printf("\e[0;33mIteration:\e[0m %llu, \e[0;33mActual Calculation:\e[0m %.32f\n", k, pi);
    }
    return pi;
}


int main() {
	std::cout << "\n\e[0;35m[========= RECURSIVE PI =========]\e[0m\n\n";

	ulli iterations;
	getcin("Enter the number of iterations: ", iterations);

	double pi = nilakanthaPiAproximation(iterations);

	printf("The value of π is:\e[0;32m %.32lf \e[0m\n", pi);

	return 0;
}
