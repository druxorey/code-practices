#include <iostream>
#include "../U1-libraries/dxinput.cpp"

double getHarmonic(int size) {
	if (size <= 1) return 1.0;
	return (1.0 / (double)size) + getHarmonic(size - 1);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= HARMONIC SERIES =========]\e[0m\n\n";

	int size = 0;

	getInput("Enter the number of terms to sum: ", size);
	printf("\e[0;32mThe sum of the first %d terms of the harmonic series is %f\e[0m\n", size, getHarmonic(size));

	return 0;
}
