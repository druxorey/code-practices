#include <iostream>

double getAmdahlLaw(double S, double P) {
	return P / ((1 / S) - (1 - P));
}


int main() {
	double S = 0, P = 0;

	std::cout << "\n\e[0;35m[========= AMDAHL LAW =========]\e[0m\n" << '\n';
	
	printf("Enter the speedup factor (S): ");
	scanf("%lf", &S);

	printf("Enter the percentage of the program that can be parallelized (P): ");
	scanf("%lf", &P);

	printf("\n\e[0;32mThe speedup factor is %lf\e[0m\n", getAmdahlLaw(S, P));

	return 0;
}
