#include <iostream>

bool isPalindrome(std::string text) { 
	int length = text.length(); 

	for (int i = 0 ; i <= length / 2 ; i++) {
		if (text[length - 1 - i] != text[i]) {
			return false;
		}
	}

	return true;
}


int main() {
	std::string inputText;

	std::cout << "\n\e[0;35m[========= PALINDROME CHECK =========]\e[0m\n" << '\n';

	printf("Enter the string: ");
	std::cin >> inputText;

	if (isPalindrome(inputText)) {
		printf("The string is a palindrome.\n");
	} else {
		printf("The string is not a palindrome.\n");
	}

	return 0;
}
