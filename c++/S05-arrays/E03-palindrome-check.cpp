#include <iostream>

bool isCapicua(std::string text) { 
	int lenght = text.length(); 

	for (int i = 0 ; i <= lenght/2 ; i++) {
		if (text[lenght-1-i] != text[i]) {
			return false;
		}
	}

	return true;
}


int main() {
	std::string textNormal;

	std::cout << "\n\e[0;35m[========= PALINDROME CHECK =========]\e[0m\n" << '\n';

	printf("Enter the string: ");
	std::cin >> textNormal;

	if (isCapicua(textNormal)) {
		printf("The string is capicua.\n");
	} else {
		printf("The string is not capicua.\n");
	}

	return 0;
}
