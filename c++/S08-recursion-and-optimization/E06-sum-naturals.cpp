#include <iostream>
#include "../U1-libraries/dxinput.cpp"

unsigned int sumNaturals(int size) {
	if (size <= 0) return 0;
	return size + sumNaturals(size - 1);
}


int main() {
	int size = 0;

	std::cout << "\n\e[0;35m[========= SUM NATURALS =========]\e[0m\n" << '\n';

	getInput("Enter the number of naturals to sum: ", size);
	printf("\e[0;32mThe sum of all naturals is %d\e[0m\n", sumNaturals(size));

	return 0;
}