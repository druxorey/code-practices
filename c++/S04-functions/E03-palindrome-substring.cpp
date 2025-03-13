#include <iostream>
#include "../U1-libraries/dxinput.hpp"

int isCapicua(std::string number) {
	int size = number.size();

	for (int i = 0; i < size - 1; i++) {
		if (number[i] == number[i + 2]) {
			std::string capicua = number.substr(i, 3);
			return std::stoi(capicua);
		}
	}

	return -1;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME SUBSTRING =========]\e[0m\n\n";

	std::string number;

	getcin("Enter the number to be evaluated: ", number);

	int capicuaNumber = isCapicua(number);

	printf("The number %s, ", number.c_str());
	if (capicuaNumber != -1) {
		printf("\e[0;32mhas the capicua number %i\e[0m.\n", capicuaNumber);
	} else {
		printf("\e[0;31mdoes not have a capicua number\e[0m.\n");
	}

	return 0;
}
