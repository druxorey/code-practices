#include <iostream>
#include "../U1-libraries/dxinput.hpp"

unsigned int sumNaturals(int size) {
	if (size <= 0) return 0;
	return size + sumNaturals(size - 1);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SUM NATURALS =========]\e[0m\n\n";

	int size = 0;

	getcin("Enter the number of naturals to sum: ", size);
	printf("\e[0;32mThe sum of all naturals is %d\e[0m\n", sumNaturals(size));

	return 0;
}
