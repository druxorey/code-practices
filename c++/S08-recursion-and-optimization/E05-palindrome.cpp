#include <iostream>
#include "../U1-libraries/dxinput.cpp"

bool getPalindrome(char input[], int size, int index = 0) {
	if (size <= 0) return true;
	if (input[index] == input[size - 1]) return getPalindrome(input, size - 1, index + 1);
	else return false;
}


int main() {
	char input[48];

	std::cout << "\n\e[0;35m[========= PALINDROME =========]\e[0m\n" << '\n';

	getInput("Enter a word: ", input);
	int size = sizeof(input) / sizeof(input[0]);

	if (getPalindrome(input, size)) {
		printf("The word is a palindrome\n");
	} else {
		printf("The word is not a palindrome\n");
	}

	return 0;
}